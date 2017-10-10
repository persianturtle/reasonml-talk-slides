open Types;

let component = ReasonReact.statelessComponent "Slide";

let make ::attributes ::active children => {
  ...component,
  render: fun _self => {
    let transform =
      "translate(-50%,-50%) "
      ^ "translate3d("
      ^ string_of_int attributes.translate.x
      ^ "px,"
      ^ string_of_int attributes.translate.y
      ^ "px,"
      ^ string_of_int attributes.translate.z
      ^ "px)"
      ^ " "
      ^ "rotateX("
      ^ string_of_int attributes.rotate.x
      ^ "deg)"
      ^ " "
      ^ "rotateY("
      ^ string_of_int attributes.rotate.y
      ^ "deg)"
      ^ " "
      ^ "rotateZ("
      ^ string_of_int attributes.rotate.z
      ^ "deg)"
      ^ " "
      ^ "scale("
      ^ string_of_int attributes.scale
      ^ ")";
    ReasonReact.createDomElement
      "div"
      props::{
        "className": "slide",
        "style":
          ReactDOMRe.Style.make
            position::"absolute"
            ::transform
            transformStyle::"preserve-3d"
            opacity::(active ? "1" : "0")
            ()
      }
      children
  }
};
