const express = require("express");

const app = express();
const path = require('path');


app.get("/", (req, res) => { // req = request or res = respond
	res.sendFile(path.join(__dirname+'/home.html'));
})

app.get("/about", (req, res) => {
	res.sendFile(path.join(__dirname+'/about.html'));
})

app.get("/content", (req, res) => {
	res.sendFile(path.join(__dirname+"/content.html"));
})

app.get("/detail", (req, res) => {
	res.sendFile(path.join(__dirname+"/detail.html"));
})

app.get("/aboutme", (req, res) => {
	res.send({
		name: "win lin tun",
		age : 24,
		hobby: "readding"
	})
})


app.listen(3000, ()=> {
	console.log("Server starting up: http://localhost:3000/");
})


// resource
// https://codeforgeek.com/render-html-file-expressjs/