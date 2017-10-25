[%bs.raw {|require('./index.css')|}];

let logo_precisioneffect: string = [%bs.raw {|require('./img/logos/precisioneffect.png')|}];

let logo_reason: string = [%bs.raw {|require('./img/logos/reason.png')|}];

let maintainability: string = [%bs.raw {|require('./img/maintainability.jpg')|}];

let logo_react: string = [%bs.raw {|require('./img/logos/react.svg')|}];

let logo_redux: string = [%bs.raw {|require('./img/logos/redux.png')|}];

let logo_flow: string = [%bs.raw {|require('./img/logos/flow.png')|}];

let why: string = [%bs.raw {|require('./img/why.gif')|}];

let reach: string = [%bs.raw {|require('./img/reach.jpg')|}];

let bucklescript: string = [%bs.raw {|require('./img/bucklescript.png')|}];

let logo_reasonreact: string = [%bs.raw {|require('./img/logos/reason-react-white.svg')|}];

let converted: string = [%bs.raw {|require('./img/converted.png')|}];

let interop: string = [%bs.raw {|require('./img/interop.png')|}];

let moment: string = [%bs.raw {|require('./img/types/moment.jpg')|}];

let naive: string = [%bs.raw {|require('./img/types/naive.png')|}];

let head: string = [%bs.raw {|require('./img/types/head.png')|}];

let pairs: string = [%bs.raw {|require('./img/types/pairs.png')|}];

let win: string = [%bs.raw {|require('./img/types/win.jpg')|}];

let bsb: string = [%bs.raw {|require('./img/environment/bsb.png')|}];

let options: string = [%bs.raw {|require('./img/environment/options.png')|}];

let editor: string = [%bs.raw {|require('./img/environment/editor.png')|}];

let cra: string = [%bs.raw {|require('./img/createReactApp/code.png')|}];

let cra_css: string = [%bs.raw {|require('./img/createReactApp/css.png')|}];

let cra_logo: string = [%bs.raw {|require('./img/createReactApp/logo.png')|}];

let cra_component: string = [%bs.raw {|require('./img/createReactApp/component.png')|}];

let cra_make: string = [%bs.raw {|require('./img/createReactApp/make.png')|}];

let cra_render: string = [%bs.raw {|require('./img/createReactApp/render.png')|}];

let cra_string: string = [%bs.raw {|require('./img/createReactApp/string.png')|}];

let vp_action_state_component: string = [%bs.raw
  {|require('./img/videoPlayer/action-state-component.png')|}
];

let vp_ref: string = [%bs.raw {|require('./img/videoPlayer/ref.png')|}];

let vp_make: string = [%bs.raw {|require('./img/videoPlayer/make.png')|}];

let vp_initialState: string = [%bs.raw {|require('./img/videoPlayer/initialState.png')|}];

let vp_reducer: string = [%bs.raw {|require('./img/videoPlayer/reducer.png')|}];

let vp_reducer_switch: string = [%bs.raw {|require('./img/videoPlayer/reducer-switch.png')|}];

let vp_reducer_if: string = [%bs.raw {|require('./img/videoPlayer/reducer-if.png')|}];

let vp_reducer_ref: string = [%bs.raw {|require('./img/videoPlayer/reducer-ref.png')|}];

let vp_reducer_state: string = [%bs.raw {|require('./img/videoPlayer/reducer-state.png')|}];

let vp_render: string = [%bs.raw {|require('./img/videoPlayer/render.png')|}];

let vp_action_ref: string = [%bs.raw {|require('./img/videoPlayer/action-ref.png')|}];

let retained: string = [%bs.raw {|require('./img/retained/full.png')|}];

let retained_type: string = [%bs.raw {|require('./img/retained/type.png')|}];

let retained_component: string = [%bs.raw {|require('./img/retained/component.png')|}];

let retained_prop: string = [%bs.raw {|require('./img/retained/prop.png')|}];

let retained_didMount: string = [%bs.raw {|require('./img/retained/didMount.png')|}];

let reducer_options: string = [%bs.raw {|require('./img/reducer-options.png')|}];

let medium: string = [%bs.raw {|require('./img/medium.png')|}];

open Types;

let config: config = {width: 1024, height: 768, perspective: 1000, transitionDuration: 1000};

let s = ReasonReact.stringToElement;

let slides: slides = [|
  (
    {translate: {x: (-2000), y: (-1500), z: 0}, rotate: {x: 0, y: 0, z: 0}, scale: 1.0},
    <div style=(ReactDOMRe.Style.make display::"flex" flexDirection::"column" height::"40%" ())>
      <h1> (s "From ReactJS to ReasonML") </h1>
      <a
        style=(ReactDOMRe.Style.make marginTop::"auto" ())
        href="https://persianturtle.github.io/reasonml-talk-slides/build/">
        (s "https://persianturtle.github.io/reasonml-talk-slides/build/")
      </a>
    </div>
  ),
  (
    {translate: {x: (-1000), y: (-1500), z: 0}, rotate: {x: 0, y: 0, z: 0}, scale: 1.0},
    <div>
      <h1> (s "About me") </h1>
      <p style=(ReactDOMRe.Style.make margin::"0" ())> (s "Raphael Rafatpanah") </p>
      <div style=(ReactDOMRe.Style.make display::"flex" alignItems::"center" ())>
        <p style=(ReactDOMRe.Style.make margin::"0" ())> (s "UI Architect @ ") </p>
        <a
          style=(ReactDOMRe.Style.make display::"flex" alignItems::"center" ())
          target="_blank"
          href="https://precisioneffect.com">
          <img
            style=(ReactDOMRe.Style.make width::"210px" marginLeft::"7px" ())
            src=logo_precisioneffect
          />
        </a>
      </div>
      <a target="_blank" href="https://github.com/persianturtle">
        <p style=(ReactDOMRe.Style.make margin::"0" ())> (s "github.com/persianturtle") </p>
      </a>
      <a target="_blank" href="https://medium.com/@rrafatpanah">
        <p style=(ReactDOMRe.Style.make margin::"0" ())> (s "medium.com/@rrafatpanah") </p>
      </a>
      <a target="_blank" href="https://twitter.com/rrafatpanah">
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
    <img style=(ReactDOMRe.Style.make width::"80%" ()) src=maintainability />
  ),
  (
    {translate: {x: 2000, y: (-1500), z: 0}, rotate: {x: 0, y: 0, z: 90}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"80%" ()) src=logo_react />
  ),
  (
    {translate: {x: 2000, y: (-1500), z: 0}, rotate: {x: 0, y: 0, z: 90}, scale: 1.0},
    <div
      style=(
        ReactDOMRe.Style.make
          display::"flex" flexDirection::"column" justifyContent::"center" alignItems::"center" ()
      )>
      <img style=(ReactDOMRe.Style.make height::"250px" ()) src=logo_redux />
      <img style=(ReactDOMRe.Style.make height::"250px" ()) src=logo_flow />
    </div>
  ),
  (
    {translate: {x: 3000, y: (-1500), z: 0}, rotate: {x: 0, y: 0, z: 90}, scale: 1.0},
    <div>
      <h1> (s "Why do we need Reason?") </h1>
      <p style=(ReactDOMRe.Style.make opacity::"0" ())>
        (s "ReactJS was a stepping stone to Reason.")
      </p>
      <p className="source" style=(ReactDOMRe.Style.make opacity::"0" marginBottom::"0" ())>
        (s "sources: ")
      </p>
      <ul style=(ReactDOMRe.Style.make opacity::"0" marginTop::"0" ())>
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
    {translate: {x: 3000, y: (-1500), z: 0}, rotate: {x: 0, y: 0, z: 90}, scale: 1.0},
    <div>
      <h1> (s "Why do we need Reason?") </h1>
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
    {translate: {x: 4000, y: (-500), z: 0}, rotate: {x: 0, y: 0, z: 0}, scale: 1.0},
    <div>
      <h1> (s "What is Reason?") </h1>
      <p style=(ReactDOMRe.Style.make opacity::"0" ())>
        (s "Reason is a new syntax for the OCaml language.*")
      </p>
      <p style=(ReactDOMRe.Style.make opacity::"0" fontSize::"24px" ())>
        (s "*not yet a complete definition")
      </p>
    </div>
  ),
  (
    {translate: {x: 4000, y: (-500), z: 0}, rotate: {x: 0, y: 0, z: 0}, scale: 1.0},
    <div>
      <h1> (s "What is Reason?") </h1>
      <p> (s "Reason is a new syntax for the OCaml language.*") </p>
      <p style=(ReactDOMRe.Style.make fontSize::"24px" ())>
        (s "*not yet a complete definition")
      </p>
    </div>
  ),
  (
    {translate: {x: 5000, y: (-500), z: 0}, rotate: {x: 0, y: 0, z: 0}, scale: 1.0},
    <div>
      <h1> (s "What is OCaml?") </h1>
      <p style=(ReactDOMRe.Style.make opacity::"0" ())>
        (
          s "OCaml is a general purpose programming language with an emphasis on expressiveness and safety."
        )
      </p>
      <ul style=(ReactDOMRe.Style.make opacity::"0" marginTop::"0" ())>
        <li>
          (
            s "has an advanced type system that helps catch your mistakes without getting in your way"
          )
        </li>
        <li> (s "no runtime type errors after type checking") </li>
      </ul>
      <p className="source" style=(ReactDOMRe.Style.make opacity::"0" margin::"0" ())>
        (s "sources: ")
      </p>
      <ul style=(ReactDOMRe.Style.make opacity::"0" marginTop::"0" ())>
        <li>
          <a target="_blank" href="http://ocaml.org/learn/description.html">
            (s "ocaml.org/learn/description.html")
          </a>
        </li>
        <li>
          <a
            target="_blank"
            href="https://bucklescript.github.io/bucklescript/Manual.html#_problems_of_javascript_how_bucklescript_solves_them">
            (s "bucklescript.github.io/bucklescript/Manual.html")
          </a>
        </li>
      </ul>
    </div>
  ),
  (
    {translate: {x: 5000, y: (-500), z: 0}, rotate: {x: 0, y: 0, z: 0}, scale: 1.0},
    <div>
      <h1> (s "What is OCaml?") </h1>
      <p>
        (
          s "OCaml is a general purpose programming language with an emphasis on expressiveness and safety."
        )
      </p>
      <ul style=(ReactDOMRe.Style.make marginTop::"0" ())>
        <li>
          (
            s "has an advanced type system that helps catch your mistakes without getting in your way"
          )
        </li>
        <li> (s "no runtime type errors after type checking") </li>
      </ul>
      <p className="source" style=(ReactDOMRe.Style.make margin::"0" ())> (s "sources: ") </p>
      <ul style=(ReactDOMRe.Style.make marginTop::"0" ())>
        <li>
          <a target="_blank" href="http://ocaml.org/learn/description.html">
            (s "ocaml.org/learn/description.html")
          </a>
        </li>
        <li>
          <a
            target="_blank"
            href="https://bucklescript.github.io/bucklescript/Manual.html#_problems_of_javascript_how_bucklescript_solves_them">
            (s "bucklescript.github.io/bucklescript/Manual.html")
          </a>
        </li>
      </ul>
    </div>
  ),
  (
    {translate: {x: 5000, y: (-500), z: 0}, rotate: {x: 0, y: 0, z: 0}, scale: 1.0},
    <div>
      <h1> (s "If OCaml is so great, why is no one using it?") </h1>
      <img style=(ReactDOMRe.Style.make width::"100%" ()) src=why />
    </div>
  ),
  (
    {translate: {x: 5000, y: 500, z: 0}, rotate: {x: 0, y: 0, z: 180}, scale: 1.0},
    <div>
      <h1> (s "Welcome to Reason") </h1>
      <p> (s "Reason's new syntax is meant to be welcoming to JavaScript developers.") </p>
      <p> (s "Reason's toolchain makes it easy to get started.") </p>
    </div>
  ),
  (
    {translate: {x: 4000, y: 500, z: 0}, rotate: {x: 0, y: 0, z: 180}, scale: 1.0},
    <img src=reach />
  ),
  (
    {translate: {x: 3000, y: 500, z: 0}, rotate: {x: 0, y: 0, z: 180}, scale: 1.0},
    <div>
      <img src=bucklescript />
      <a
        style=(ReactDOMRe.Style.make display::"block" textAlign::"center" ())
        target="_blank"
        href="https://reasonml.github.io/try/?reason=DYUwLgBA5gTi4EsB2UJIIYFsQQLwD4IAiACQWIgD00sQBuAKAYCkBnAOmAHtUAKWeGGSoiAJRDoAxmGYBlCACEurMFyREAlHSA">
        (s "https://reasonml.github.io/try")
      </a>
    </div>
  ),
  (
    {translate: {x: 3000, y: 500, z: 0}, rotate: {x: 0, y: 0, z: 180}, scale: 1.0},
    <img
      style=(ReactDOMRe.Style.make transform::"translate(1100px, 243px) scale(4)" ())
      src=bucklescript
    />
  ),
  (
    {translate: {x: 3000, y: 500, z: 0}, rotate: {x: 0, y: 0, z: 180}, scale: 1.0},
    <img
      style=(ReactDOMRe.Style.make transform::"translate(-460px, 243px) scale(4)" ())
      src=bucklescript
    />
  ),
  (
    {translate: {x: 3000, y: 500, z: 0}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <div style=(ReactDOMRe.Style.make backgroundColor::"#db4d3f" width::"50%" padding::"30px" ())>
      <img src=logo_reasonreact />
    </div>
  ),
  (
    {translate: {x: 3000, y: 500, z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <div className="center">
      <p> (s "50% of messenger.com's UI Components have been converted to Reason") </p>
      <img src=converted />
    </div>
  ),
  (
    {translate: {x: 3000, y: 500, z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <div>
      <h1> (s "Facebook is investing in Reason") </h1>
      <ul>
        <li> (s "new syntax version estimated to ship soon") </li>
        <li> (s "it will look even more like JavaScript") </li>
        <li> (s "automated upgrade script will convert codebase to the new syntax") </li>
      </ul>
    </div>
  ),
  (
    {translate: {x: 3000, y: 500, z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img src=interop />
  ),
  (
    {translate: {x: 3000, y: 500, z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img
      style=(ReactDOMRe.Style.make transform::"translate(802px, 211px) scale(3.25)" ())
      src=interop
    />
  ),
  (
    {translate: {x: 3000, y: 500, z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img
      style=(ReactDOMRe.Style.make transform::"translate(-460px, 243px) scale(4)" ())
      src=interop
    />
  ),
  (
    {translate: {x: 4000, y: (-1500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"80%" ()) src=moment />
  ),
  (
    {translate: {x: 5000, y: (-1500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"80%" ()) src=naive />
  ),
  (
    {translate: {x: 5000, y: (-1500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"80%" ()) src=head />
  ),
  (
    {translate: {x: 5000, y: (-1500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"80%" ()) src=pairs />
  ),
  (
    {translate: {x: 5000, y: (-1500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"80%" ()) src=win />
  ),
  (
    {translate: {x: 6000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <div> <h1> (s "Let's get started with Reason") </h1> <img src=bsb /> </div>
  ),
  (
    {translate: {x: 6000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <div>
      <h1> (s "Editor Integration") </h1>
      <img src=editor />
      <a
        target="_blank"
        href="https://blog.behrends.io/how-to-setup-reasonml-for-a-react-native-project-8c51f1cc1d34">
        (s "Reason & React Native")
      </a>
      <br />
      <a target="_blank" href="https://reasonml.github.io/guide/editor-tools/global-installation">
        (s "Editor integration")
      </a>
    </div>
  ),
  (
    {translate: {x: 6000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <div> <h1> (s "Project template options") </h1> <img src=options /> </div>
  ),
  (
    {translate: {x: 7000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <div>
      <h1 style=(ReactDOMRe.Style.make textAlign::"center" ())> (s "Create React App") </h1>
      <CreateReactApp message="Welcome to React and Reason" />
    </div>
  ),
  (
    {translate: {x: 7000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"100%" ()) src=cra_css />
  ),
  (
    {translate: {x: 7000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"100%" ()) src=cra_logo />
  ),
  (
    {translate: {x: 7000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"100%" ()) src=cra_component />
  ),
  (
    {translate: {x: 7000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"100%" ()) src=cra_make />
  ),
  (
    {translate: {x: 7000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"100%" ()) src=cra_render />
  ),
  (
    {translate: {x: 7000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"100%" ()) src=cra_string />
  ),
  (
    {translate: {x: 7000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"100%" ()) src=cra />
  ),
  (
    {translate: {x: 8000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <div>
      <h1 style=(ReactDOMRe.Style.make textAlign::"center" ())>
        (ReasonReact.stringToElement "Simple Video Player Example")
      </h1>
      <VideoPlayer />
    </div>
  ),
  (
    {translate: {x: 9000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"100%" ()) src=vp_action_state_component />
  ),
  (
    {translate: {x: 9000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"100%" ()) src=vp_ref />
  ),
  (
    {translate: {x: 9000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"100%" ()) src=vp_make />
  ),
  (
    {translate: {x: 9000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"100%" ()) src=vp_initialState />
  ),
  (
    {translate: {x: 9000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"100%" ()) src=vp_reducer />
  ),
  (
    {translate: {x: 9000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"100%" ()) src=vp_reducer_switch />
  ),
  (
    {translate: {x: 9000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"100%" ()) src=vp_reducer_if />
  ),
  (
    {translate: {x: 9000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"100%" ()) src=vp_reducer_ref />
  ),
  (
    {translate: {x: 9000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"100%" ()) src=vp_reducer_state />
  ),
  (
    {translate: {x: 9000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"100%" ()) src=reducer_options />
  ),
  (
    {translate: {x: 9000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"100%" ()) src=vp_render />
  ),
  (
    {translate: {x: 9000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <img style=(ReactDOMRe.Style.make width::"100%" ()) src=vp_action_ref />
  ),
  (
    {translate: {x: 9000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <div>
      <h1> (s "WithRetainedProps") </h1>
      <img style=(ReactDOMRe.Style.make width::"100%" ()) src=retained_type />
    </div>
  ),
  (
    {translate: {x: 9000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <div>
      <h1> (s "WithRetainedProps") </h1>
      <img style=(ReactDOMRe.Style.make width::"100%" ()) src=retained_component />
    </div>
  ),
  (
    {translate: {x: 9000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <div>
      <h1> (s "WithRetainedProps") </h1>
      <img style=(ReactDOMRe.Style.make width::"100%" ()) src=retained_prop />
    </div>
  ),
  (
    {translate: {x: 9000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <div>
      <h1> (s "WithRetainedProps") </h1>
      <img style=(ReactDOMRe.Style.make width::"100%" ()) src=retained_didMount />
    </div>
  ),
  (
    {translate: {x: 9000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <div>
      <h1> (s "So, why do we need Reason?") </h1>
      <p> (s "Reason is a lot more maintainable that what we're doing today.") </p>
      <p> (s "Elm is pretty awesome too.") </p>
    </div>
  ),
  (
    {translate: {x: 10000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <div>
      <h1> (s "Resources") </h1>
      <p> (s "These talks have helped me to get started with Reason/ML.") </p>
      <ul>
        <li>
          <a target="_blank" href="https://youtu.be/vTb8UU_Yjmk">
            (s "Jared Forsyth - Reason: JavaScript-flavored OCaml")
          </a>
        </li>
        <li>
          <a target="_blank" href="https://youtu.be/L0xz-ILKsLE">
            (s "Jacob Bass - Universal Reason")
          </a>
        </li>
        <li>
          <a target="_blank" href="https://youtu.be/j5mlMUzpE5g">
            (s "Keira Hodgkison - The Why and How of ReasonML")
          </a>
        </li>
        <li>
          <a target="_blank" href="https://youtu.be/-J8YyfrSwTk">
            (s "Yaron Minsky - Effective ML")
          </a>
        </li>
        <li>
          <a target="_blank" href="https://youtu.be/IcgmSRJHu_8">
            (s "Richard Feldman - Making Impossible States Impossible")
          </a>
        </li>
        <li>
          <a target="_blank" href="https://youtu.be/XpDsk374LDE">
            (s "Evan Czaplicki - The life of a file")
          </a>
        </li>
        <li>
          <a target="_blank" href="https://youtu.be/oYk8CKH7OhE">
            (s "Evan Czaplicki - Let's be mainstream!")
          </a>
        </li>
      </ul>
    </div>
  ),
  (
    {translate: {x: 11000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <div>
      <h1> (s "Thank you") </h1>
      <p>
        (s "Sincere thank you to everyone on the ")
        <a target="_blank" href="https://discord.gg/reasonml"> (s "Discord channel") </a>
        (s " for helping so many people get started with Reason.")
      </p>
      <p> (s "Please join the community today!") </p>
      <p>
        <a target="_blank" href="https://discord.gg/reasonml"> (s "discord.gg/reasonml") </a>
      </p>
      <p> (s "Big thank you to ReactJS Boston for having me.") </p>
      <p> (s "Thank you for listening!") </p>
    </div>
  ),
  (
    {translate: {x: 11000, y: (-2500), z: (-10000)}, rotate: {x: 0, y: 0, z: 1080}, scale: 1.0},
    <div>
      <h1> (s "Medium.com tutorial") </h1>
      <img style=(ReactDOMRe.Style.make width::"100%" ()) src=medium />
      <a target="_blank" href="https://medium.com/@RRafatpanah/a-journey-to-reason-c408a87a54de">
        (s "Link")
      </a>
    </div>
  )
|];

ReactDOMRe.renderToElementWithId <App slides config /> "root";
