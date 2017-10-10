[%bs.raw {|require('./app.css')|}];

external document : Dom.document = "document" [@@bs.val];

external addEventListener : Dom.document => string => (ReactEventRe.synthetic 'a => unit) => unit =
  "addEventListener" [@@bs.send];

external innerWidth : int = "" [@@bs.val "window.innerWidth"];

external innerHeight : int = "" [@@bs.val "window.innerHeight"];

open Types;

type action =
  | KeyDown string;

type state = {
  active: int,
  scale: float,
  canvas
};

let component = ReasonReact.reducerComponent "App";

let process slides active =>
  Array.mapi
    (
      fun index (attributes, content) =>
        <Slide attributes active=(active == index)> content </Slide>
    )
    slides;

let calculateCanvas (slides: array (attributes, ReasonReact.reactElement)) active => {
  let (attributes, _) = slides.(active);
  {
    translate: {
      x: - attributes.translate.x,
      y: - attributes.translate.y,
      z: - attributes.translate.z
    },
    rotate: {x: - attributes.rotate.x, y: - attributes.rotate.y, z: - attributes.rotate.z}
  }
};

let calculateScale (slides: array (attributes, ReasonReact.reactElement)) active config => {
  let initial = {
    let h = float_of_int innerHeight /. float_of_int config.height;
    let w = float_of_int innerWidth /. float_of_int config.width;
    h > w ? w : h
  };
  let (attributes, _) = slides.(active);
  1.0 /. float_of_int attributes.scale *. initial
};

let makeTransformString (canvas: canvas) =>
  "rotateX("
  ^ string_of_int canvas.rotate.x
  ^ "deg)"
  ^ " "
  ^ "rotateY("
  ^ string_of_int canvas.rotate.y
  ^ "deg)"
  ^ " "
  ^ "rotateZ("
  ^ string_of_int canvas.rotate.z
  ^ "deg)"
  ^ " "
  ^ "translate3d("
  ^ string_of_int canvas.translate.x
  ^ "px,"
  ^ string_of_int canvas.translate.y
  ^ "px,"
  ^ string_of_int canvas.translate.z
  ^ "px)";

let make ::slides ::config _children => {
  ...component,
  initialState: fun () => {
    let canvas = calculateCanvas slides 0;
    let scale = calculateScale slides 0 config;
    {active: 0, scale, canvas}
  },
  reducer: fun action state =>
    switch action {
    | KeyDown key =>
      if (key == " ") {
        let active = state.active >= Array.length slides - 1 ? 0 : state.active + 1;
        let canvas = calculateCanvas slides active;
        let scale = calculateScale slides active config;
        ReasonReact.Update {canvas, scale, active}
      } else if (
        key == "ArrowLeft"
      ) {
        let active = state.active == 0 ? Array.length slides - 1 : state.active - 1;
        let canvas = calculateCanvas slides active;
        let scale = calculateScale slides active config;
        ReasonReact.Update {canvas, scale, active}
      } else if (
        key == "ArrowRight"
      ) {
        let active = state.active >= Array.length slides - 1 ? 0 : state.active + 1;
        let canvas = calculateCanvas slides active;
        let scale = calculateScale slides active config;
        ReasonReact.Update {canvas, scale, active}
      } else {
        Js.log key;
        ReasonReact.NoUpdate
      }
    },
  didMount: fun self => {
    addEventListener
      document
      "keydown"
      (
        self.reduce (
          fun event => {
            ReactEventRe.Keyboard.preventDefault event;
            KeyDown (ReactEventRe.Keyboard.key event)
          }
        )
      );
    ReasonReact.NoUpdate
  },
  render: fun self => {
    let perspective = float_of_int config.perspective /. self.state.scale;
    let transform = makeTransformString self.state.canvas;
    <section
      style=(
        ReactDOMRe.Style.make
          position::"absolute"
          transformOrigin::"top left"
          transition::"all 750ms ease-in-out 125ms"
          transformStyle::"preserve-3d"
          top::"50%"
          left::"50%"
          transform::(
            "perspective("
            ^ string_of_float perspective
            ^ "px)"
            ^ " "
            ^ "scale("
            ^ string_of_float self.state.scale
            ^ ")"
          )
          ()
      )>
      (
        ReasonReact.createDomElement
          "section"
          props::{
            "style":
              ReactDOMRe.Style.make
                position::"absolute"
                transformOrigin::"top left"
                transition::"all 1s ease-in-out 250ms"
                transformStyle::"preserve-3d"
                ::transform
                ()
          }
          (process slides self.state.active)
      )
    </section>
  }
};
