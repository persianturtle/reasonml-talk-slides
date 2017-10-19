[%bs.raw {|require('./videoPlayerExample.css')|}];

type action =
  | ToggleVideo
  | ToggleModal;

type state = {
  video: ref (option Dom.element),
  isPlayingVideo: bool,
  isShowingModal: bool
};

let component = ReasonReact.reducerComponent "videoPlayerExample";

external video : string = "./video.mp4" [@@bs.module];

let setVideoRef theRef {ReasonReact.state: state} => state.video := Js.Null.to_opt theRef;

let make _children => {
  ...component,
  initialState: fun () => {video: ref None, isPlayingVideo: true, isShowingModal: false},
  reducer: fun action state =>
    switch action {
    | ToggleVideo =>
      if state.isPlayingVideo {
        switch !state.video {
        | None => ()
        | Some ref => (ReactDOMRe.domElementToObj ref)##pause ()
        }
      } else {
        switch !state.video {
        | None => ()
        | Some ref => (ReactDOMRe.domElementToObj ref)##play ()
        }
      };
      ReasonReact.Update {
        ...state,
        isPlayingVideo: not state.isPlayingVideo,
        isShowingModal: false
      }
    | ToggleModal =>
      if state.isShowingModal {
        switch !state.video {
        | None => ()
        | Some r => (ReactDOMRe.domElementToObj r)##play ()
        };
        ReasonReact.Update {
          ...state,
          isPlayingVideo: true,
          isShowingModal: not state.isShowingModal
        }
      } else {
        switch !state.video {
        | None => ()
        | Some r => (ReactDOMRe.domElementToObj r)##pause ()
        };
        ReasonReact.Update {
          ...state,
          isPlayingVideo: false,
          isShowingModal: not state.isShowingModal
        }
      }
    },
  render: fun self => {
    let control = self.state.isPlayingVideo ? "pause" : "play";
    let modal = self.state.isShowingModal ? "close" : "modal";
    <div className="Example1">
      <video
        autoPlay=Js.true_
        loop=Js.true_
        onClick=(self.reduce (fun _event => ToggleVideo))
        ref=(self.handle setVideoRef)>
        <source src=video _type="video/mp4" />
      </video>
      <nav className="controls">
        <a onClick=(self.reduce (fun _event => ToggleVideo))>
          (ReasonReact.stringToElement control)
        </a>
        <a onClick=(self.reduce (fun _event => ToggleModal))>
          (ReasonReact.stringToElement modal)
        </a>
      </nav>
      <aside className=(self.state.isShowingModal ? "modal active" : "modal")>
        <table>
          <tbody>
            <tr>
              <td> (ReasonReact.stringToElement "Title:") </td>
              <td> (ReasonReact.stringToElement "x marks the spot") </td>
            </tr>
            <tr>
              <td> (ReasonReact.stringToElement "Author:") </td>
              <td> (ReasonReact.stringToElement "portal process") </td>
            </tr>
            <tr>
              <td> (ReasonReact.stringToElement "Link:") </td>
              <td>
                <a href="https://youtu.be/fpQnV_Bp7Jo" target="_blank">
                  (ReasonReact.stringToElement "Youtube")
                </a>
              </td>
            </tr>
          </tbody>
        </table>
      </aside>
    </div>
  }
};
