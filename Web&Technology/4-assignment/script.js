
function arraySize(arr) {
	let arrSize = 0;

	for (let i in arr) {
		arrSize++;
	}
	return arrSize;
}



function binarySearch(data, value) {
	let low = 0;
	let heigh = arraySize(data)-1;

	while (low <= heigh) {
		let mid = Math.floor((low+heigh)/2);

		if (value == data[mid]) {
			return true;
		} else if (data[mid] > value) {
			heigh = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	return false;
}


let database = [];

for (let i=0; i < 1000; i++) {
	database[i] = i ;
}


let name = document.getElementById('name');
let phone = document.getElementById('phone');
let d_num = document.getElementById('d_num');
let text = document.getElementById('text');
let select = document.getElementById("select");




function show() {
	text.innerHTML = `name: ${name.value} | phone: ${phone.value} | num: ${d_num.value}`;
}


let userDatabase = [];
let temp = [];

function insertData(name, phone, num) {
	for(let i=0; i < select.value; i++) {
		temp[i] = temp[name];
	}
}


insertData(name.value, phone.value, d_num.value);
console.log(temp);