[@react.component]
let make = (~color) => {
  let blockStyle =
            ReactDOMRe.Style.make(
              ~height="120px",
              ~width="120px",
              ~borderRadius="8px",
              ~boxShadow="0px 4px 16px rgb(200, 200, 200)",
              ~backgroundColor=color,
              (),
            );
  <div style=blockStyle />;
};