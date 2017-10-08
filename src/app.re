[%bs.raw {|require('./app.css')|}];

[%bs.raw {|require('./impress.js')|}];

type impress;

external api : unit => impress = "impress" [@@bs.val];

external init : impress => unit = "init" [@@bs.send];

let component = ReasonReact.statelessComponent "App";

let make _children => {
  ...component,
  didMount: fun _self => {
    let api = api ();
    init api;
    ReasonReact.NoUpdate
  },
  render: fun _self =>
    <section id="impress">
      (
        ReasonReact.cloneElement
          <div id="bored" className="step slide" />
          props::{"data-x": (-1000), "data-y": (-1500)}
          [|
            <q>
              (
                ReasonReact.stringToElement "Aren't you just <b>bored</b> with all those slides-based presentations?"
              )
            </q>
          |]
      )
      (
        ReasonReact.cloneElement
          <div className="step slide" />
          props::{"data-x": 0, "data-y": (-1500)}
          [|
            <q>
              (
                ReasonReact.stringToElement "Don't you think that presentations given in modern browsers shouldn't copy the limits of 'classic' slide decks?"
              )
            </q>
          |]
      )
    </section>
};
