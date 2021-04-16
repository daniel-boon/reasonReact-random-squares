[@react.component]
let make = () => {
  let (colors,setColors) = React.useState(_ => [||])

  let randomColor = () => {
    let colorArray = [|
                    "#ABDEE6",
                    "#CBAACB",
                    "#FFFFB5",
                    "#FFCCB6",
                    "#F3B0C3",
                    "#8FCACA",
                    "#FF968A",
                    "#55CBCD",
                    "#ECEAE4"|];
                    
    Random.init(int_of_float(Js.Date.now()))
    let colors = Array.init(9, _ => colorArray[Random.int(8)]);

    setColors(_ => colors);
  };

  React.useEffect0(() => {
    randomColor();
    None
  });

  <div className="mainContainer">
    <h1>{React.string("Name: Supachai Boonpong")}</h1>
    <div className="blockContainer">
      {colors
        ->Belt.Array.mapWithIndex((i, color) => {
            Js.log(color);
            <Block key=string_of_int(i) color=color />;
          })
        ->React.array
      }
    </div>
    <a className="refreshButton" onClick={_ => randomColor()}>{React.string("Refresh")}</a>
    
  </div>;  
};