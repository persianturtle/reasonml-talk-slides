type config = {
  width: int,
  height: int,
  perspective: int,
  transitionDuration: int
};

type dimensions = {
  x: int,
  y: int,
  z: int
};

type canvas = {
  translate: dimensions,
  rotate: dimensions
};

type attributes = {
  translate: dimensions,
  rotate: dimensions,
  scale: float
};

type slides = array (attributes, ReasonReact.reactElement);

external window : Dom.element = "window" [@@bs.val];

external document : Dom.element = "document" [@@bs.val];

external addEventListener : Dom.element => string => (ReactEventRe.synthetic 'a => unit) => unit =
  "addEventListener" [@@bs.send];

external innerWidth : int = "" [@@bs.val "window.innerWidth"];

external innerHeight : int = "" [@@bs.val "window.innerHeight"];
