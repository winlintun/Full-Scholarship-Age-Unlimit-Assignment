
let express = require("express");
let app = express();
let path = require("path");

app.use(express.static("public_html"));



app.get("", (req, res) => {
	res.sendFile(path.join(__dirname+"/public_html/home.html"));
})




app.listen(3000, ()=> {
	console.log("Server started: http://127.0.0.1:3000")
})