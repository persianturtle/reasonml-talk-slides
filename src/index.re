[%bs.raw {|require('./index.css')|}];

let logo_reason: string = [%bs.raw {|require('./img/logo.png')|}];

let converted: string = [%bs.raw {|require('./img/converted.png')|}];

let bsb: string = [%bs.raw {|require('./img/environment/bsb.png')|}];

let options: string = [%bs.raw {|require('./img/environment/options.png')|}];

let editor: string = [%bs.raw {|require('./img/environment/editor.png')|}];

let cra_css_and_logo: string = [%bs.raw {|require('./img/createReactApp/css-and-logo.png')|}];

let cra_component: string = [%bs.raw {|require('./img/createReactApp/component.png')|}];

let cra_make: string = [%bs.raw {|require('./img/createReactApp/make.png')|}];

let cra_render: string = [%bs.raw {|require('./img/createReactApp/render.png')|}];

let vp_types: string = [%bs.raw {|require('./img/videoPlayerExample/types.png')|}];

let vp_initialState: string = [%bs.raw {|require('./img/videoPlayerExample/initialState.png')|}];

let vp_reduce: string = [%bs.raw {|require('./img/videoPlayerExample/reduce.png')|}];

external register_service_worker : unit => unit =
  "default" [@@bs.module "./registerServiceWorker"];

open Types;

let config: config = {width: 1024, height: 768, perspective: 1000, transitionDuration: 1000};

let s = ReasonReact.stringToElement;

let slides: slides = [|
  (
    {translate: {x: (-2000), y: (-1500), z: 0}, rotate: {x: 0, y: 0, z: 0}, scale: 1.0},
    <div> <h1> (s "From ReactJS to ReasonML") </h1> </div>
  ),
  (
    {translate: {x: (-1000), y: (-1500), z: 0}, rotate: {x: 0, y: 0, z: 0}, scale: 1.0},
    <div>
      <h1> (s "About me") </h1>
      <p style=(ReactDOMRe.Style.make margin::"0" ())> (s "Raphael Rafatpanah") </p>
      <p style=(ReactDOMRe.Style.make margin::"0" ())> (s "UI Architect @ precisioneffect") </p>
      <a href="https://github.com/persianturtle">
        <p style=(ReactDOMRe.Style.make margin::"0" ())> (s "github.com/persianturtle") </p>
      </a>
      <a href="https://medium.com/@rrafatpanah">
        <p style=(ReactDOMRe.Style.make margin::"0" ())> (s "medium.com/@rrafatpanah") </p>
      </a>
      <a href="https://twitter.com/rrafatpanah">
        <p style=(ReactDOMRe.Style.make margin::"0" ())> (s "twitter: @rrafatpanah") </p>
      </a>
    </div>
  ),
  (
    {translate: {x: 0, y: (-2500), z: 0}, rotate: {x: 0, y: 0, z: 0}, scale: 1.0},
    <img src=logo_reason />
  ),
  (
    {translate: {x: 1000, y: (-2500), z: 0}, rotate: {x: 0, y: 0, z: 0}, scale: 1.0},
    <div>
      <h1> (s "What is Reason?") </h1>
      <ul>
        <li> (s "created by ReactJS' creator") </li>
        <li> (s "makes OCaml welcoming to JavaScript developers") </li>
        <li> (s "let's us leverage JavaScript & OCaml ecosystems") </li>
      </ul>
    </div>
  ),
  (
    {translate: {x: 2000, y: (-2500), z: 0}, rotate: {x: 0, y: 0, z: 0}, scale: 1.0},
    <div>
      <h1> (s "Reason's reach") </h1>
      <ul> <li> (s "JavaScript") </li> <li> (s "native") </li> <li> (s "unikernels") </li> </ul>
    </div>
  ),
  (
    {translate: {x: 3000, y: (-2500), z: 0}, rotate: {x: 0, y: 0, z: 0}, scale: 1.0},
    <div>
      <h1> (s "Why do we need Reason when we have React?") </h1>
      <p> (s "ReactJS was a stepping stone to Reason.") </p>
      <p className="source" style=(ReactDOMRe.Style.make marginBottom::"0" ())>
        (s "sources: ")
      </p>
      <ul style=(ReactDOMRe.Style.make marginTop::"0" ())>
        <li>
          <a href="https://www.reactiflux.com/transcripts/cheng-lou/">
            (s "reactiflux.com/transcripts/cheng-lou/")
          </a>
        </li>
        <li>
          <a href="https://youtu.be/_0T5OSSzxms?t=32m10s">
            (s "React Conf 2017 - Taming the Meta Language")
          </a>
        </li>
      </ul>
    </div>
  ),
  (
    {translate: {x: 3000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 0}, scale: 1.0},
    <div className="center">
      <p>
        (s "As of 7/27/17, 50% of messenger.com's UI Components have been converted to Reason.")
      </p>
      <img src=converted />
    </div>
  ),
  (
    {translate: {x: 4000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 0}, scale: 1.0},
    <div> <h1> (s "BuckleScript build system") </h1> <img src=bsb /> </div>
  ),
  (
    {translate: {x: 5000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 0}, scale: 1.0},
    <div> <h1> (s "Project template options") </h1> <img src=options /> </div>
  ),
  (
    {translate: {x: 6000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 0}, scale: 1.0},
    <div>
      <h1> (s "Editor Integration") </h1>
      <img src=editor />
      <a
        target="_blank"
        href="https://blog.behrends.io/how-to-setup-reasonml-for-a-react-native-project-8c51f1cc1d34">
        (s "Source ")
      </a>
    </div>
  ),
  (
    {translate: {x: 7000, y: (-2500), z: (-9000)}, rotate: {x: 0, y: 0, z: 0}, scale: 2.0},
    <div>
      <h1 style=(ReactDOMRe.Style.make textAlign::"center" ())> (s "Create React App") </h1>
      <CreateReactApp message="Welcome to React and Reason" />
    </div>
  ),
  (
    {translate: {x: 9000, y: (-2500), z: (-9000)}, rotate: {x: 0, y: 0, z: 0}, scale: 2.0},
    <div> <h1> (s "Import CSS & logo") </h1> <img src=cra_css_and_logo /> </div>
  ),
  (
    {translate: {x: 11000, y: (-2500), z: (-9000)}, rotate: {x: 0, y: 0, z: 0}, scale: 2.0},
    <div>
      <h1> (s "Creating a stateless component") </h1>
      <img src=cra_component />
      <ul>
        <li> (s "No classes") </li>
        <li>
          (
            s "The component creation API gives you a plain record, whose fields (like render) you can override"
          )
        </li>
        <li> (s "The string being passed is for debugging purposes") </li>
      </ul>
    </div>
  ),
  (
    {translate: {x: 13000, y: (-2500), z: (-9000)}, rotate: {x: 0, y: 0, z: 0}, scale: 2.0},
    <div>
      <h1> (s "The make function") </h1>
      <img src=cra_make />
      <ul>
        <li> (s "make function = ReactJS constructor + willReceiveProps") </li>
        <li> (s "uses composition instead of inheritance") </li>
        <li> <code> (s "::message") </code> (s " is a prop (and a labelled argument)") </li>
        <li>
          <code> (s "_") </code>
          (s " = ")
          (s " unused variable ( ")
          <code> (s "_children") </code>
          (s " )")
        </li>
      </ul>
    </div>
  ),
  (
    {translate: {x: 15000, y: (-2500), z: (-8000)}, rotate: {x: 0, y: 0, z: 0}, scale: 3.0},
    <div> <h1> (s "render field") </h1> <img src=cra_render /> </div>
  ),
  (
    {translate: {x: 20000, y: (-500), z: (-7000)}, rotate: {x: 0, y: 0, z: 90}, scale: 3.0},
    <div>
      <h1 style=(ReactDOMRe.Style.make textAlign::"center" ())>
        (ReasonReact.stringToElement "Simple Video Player Example")
      </h1>
      <VideoPlayerExample />
    </div>
  ),
  (
    {translate: {x: 20000, y: 2500, z: (-4000)}, rotate: {x: 0, y: 0, z: 90}, scale: 3.0},
    <div> <h1> (ReasonReact.stringToElement "types") </h1> <img src=vp_types /> </div>
  ),
  (
    {translate: {x: 20000, y: 5500, z: (-4000)}, rotate: {x: 0, y: 0, z: 90}, scale: 3.0},
    <div>
      <h1> (ReasonReact.stringToElement "initialState field") </h1>
      <img src=vp_initialState />
    </div>
  ),
  (
    {translate: {x: 20000, y: 8500, z: (-4000)}, rotate: {x: 0, y: 0, z: 90}, scale: 3.0},
    <div> <h1> (ReasonReact.stringToElement "reduce field") </h1> <img src=vp_reduce /> </div>
  )
|];

ReactDOMRe.renderToElementWithId <App slides config /> "root";

register_service_worker ();
