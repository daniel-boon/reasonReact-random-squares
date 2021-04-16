let reasonReactBlue = "#48a9dc";

let style = {j|
  body {
    background-color: rgb(224, 226, 229);
    display: flex;
    flex-direction: column;
    align-items: center;
  }
  
  .mainContainer{
    display: flex;
    flex-direction: column;
    align-items: center;
    margin-top: 10%;
  }

  .blockContainer {
    display: grid;
    grid-template-columns: 1fr 1fr 1fr;
    column-gap: 10px;
    row-gap: 15px;
    margin-top: 25px;
    margin-bottom: 20px;
  }

  .refreshButton {
	background-color:#FFFFFF;
	border-radius:8px;
	border:1px solid #lightgrey;
	display:inline-block;
	cursor:pointer;
	color:#656565;
	font-size:17px;
	padding:12px 25px;
	text-decoration:none;
  box-shadow: 0px 4px 16px rgb(200, 200, 200);
  }

  .refreshButton:hover {
	  background-color:#656565;
    color: #ffffff;
    text-decoration:none;
  }

  .refreshButton:active {
	  position:relative;
	  top:1px;
  }
|j};