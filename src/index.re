[%bs.raw {|require('./index.css')|}];

external register_service_worker : unit => unit =
  "default" [@@bs.module "./registerServiceWorker"];

open Types;

let config: config = {width: 1024, height: 768, perspective: 1000, transitionDuration: 1000};

let slides: slides = [|
  (
    {translate: {x: (-1000), y: (-1500), z: 0}, rotate: {x: 0, y: 0, z: 0}, scale: 1},
    <h1> (ReasonReact.stringToElement "first") </h1>
  ),
  (
    {translate: {x: 0, y: (-1500), z: 0}, rotate: {x: 0, y: 0, z: 0}, scale: 1},
    <h1> (ReasonReact.stringToElement "second") </h1>
  ),
  (
    {translate: {x: 1000, y: (-1500), z: 0}, rotate: {x: 0, y: 0, z: 0}, scale: 1},
    <h1> (ReasonReact.stringToElement "third") </h1>
  ),
  (
    {translate: {x: 2000, y: 1500, z: 0}, rotate: {x: 0, y: 0, z: 200}, scale: 2},
    <h1> (ReasonReact.stringToElement "fourth") </h1>
  )
|];

ReactDOMRe.renderToElementWithId <App slides config /> "root";

register_service_worker ();
