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
  scale: int
};

type slides = array (attributes, ReasonReact.reactElement);
