
let showtext = document.getElementById("show");
let rev_value =  document.getElementById("checkrange");


function getRandom() {
	let getrand = Math.trunc(Math.random() * 10);
	showtext.innerText = `Your random value: ${getrand}`;
	console.log(getrand);
}
