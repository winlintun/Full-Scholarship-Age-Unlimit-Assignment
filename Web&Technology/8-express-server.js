const express = require('express');

const app =express();


app.get("/", (req, res) => { // home route
	res.send("<h1>This is Home Page</h1>");
})


app.get("/about", (req, res)=>{
	res.send("<h1>This is About Page</h1>");
})

app.get("/json", (req, res)=>{
	res.send({
		name: "Win Lin Tun",
		hobby: "reading"
	});
})


app.listen(3000, ()=> {
	console.log("Server start up: localhost:3000/")
})