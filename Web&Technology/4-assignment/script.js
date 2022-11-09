
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
let used_num = document.getElementById('u_num');
let error = document.getElementById('error');
let admin = document.getElementById('admin');
// let select = document.getElementById("select");


let userDatabase = [];
let myindex = 0;
let tempvalue = [];

function show() {
		
	let temp = [name.value, phone.value, d_num.value];
	let tempLength = arraySize(temp);

	for(let i=0; i<= 0; i++) {
		if(userDatabase[i] == temp) {
			myindex++;
		} else {
			userDatabase[myindex] = temp;
			var value = userDatabase[myindex][2];

			if(binarySearch(database, value) === true) {
				tempvalue[myindex] = database[value];
				database[value] = NaN;
				console.log(database[value]);
				text.innerHTML = `name: ${name.value} | phone: ${phone.value} | num: ${d_num.value}`;
			} else {
				error.innerHTML = `you can't use ${value}. This number is not found our database or already used.<br>Please try again!.`;
			}

			myindex++;
		}	
	}

	console.log(userDatabase);
	console.log('usertemp data', tempvalue);
	console.log(database);
	
	used_num.innerHTML = `your used this number: ${tempvalue}`;
	
}	





function show1() {
	let mylength = arraySize(userDatabase);
	for(let i=0; i < mylength; i++) {
		let temp = `name: ${userDatabase[i][0]} | phone: ${userDatabase[i][1]} | number: ${userDatabase[i][2]}`;
		console.log(temp);
	}
}
