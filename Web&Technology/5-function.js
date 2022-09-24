// program defined function
// standard library function


function myFun(name) {
	// function body
	let myname = "My Name is " + name; // myname = local scope
	console.log(myname);
}


function myFun2() {
	console.log("This is a from myFun2 Function.");
}

function adding(a, b) {
	if (a<b){
		console.log("a is less than b");
	}else {
		console.log("a is grether than b");
	}
}

let name = "Win Lin Tun";

myFun(name);

myFun2();


adding('win', 'lin tun');

adding(4, 5);
adding(5, 5);