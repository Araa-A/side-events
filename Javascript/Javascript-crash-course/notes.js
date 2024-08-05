//console.log("Hello World")
//console.error("This is a waring")
//console.warn("This is a warning")

// let, const
// let is reassignable
// const is well, a constant
// Always use const unless you know that the value will be reassigned

let age = 30;
console.log(age)

// strings, numbers, boolean, null, undefined

const names = 'John';
const ages = 9;
const isCool = true;
const rating = 4.5; //no float
const x = null; //empty
const y = undefined; 
let z; //undefined

console.log(typeof ages);

// Concatenation 
console.log('My name is ' +  names + ' yay');

// Template Strings
console.log(`My name is ${names} and I am ${ages}`);

// Template String to Constant
const hello = `My name is ${person} and I am ${ages}`;

console.log(hello)

// NAME 

const s = 'Hello World!'; 

const h = 'technology, computer, webisites, it, code';

console.log(s.length);
console.log(s.toUpperCase());
console.log(s.substring(0,5).toUpperCase());
console.log(s.split('')); // splits by letter into an array
console.log(h.split(', '))


// COMMENTING

// or /* multiline *\

// ARRAYS (learn how to concatenate in own time)

const fruits = ['apples', 'oranges', 'pears', 10, true];

fruits[3] = 'grapes';

fruits.push ('mangoes');

fruits.unshift('strawberries');

fruits.pop('mangoes');

console.log(fruits[1]);

console.log(Array.isArray(fruits));

console.log(fruits.indexOf('oranges'));

console.log(fruits);

// OBJECT LITERALS

const person = {
	firstName: 'John',
	lastName: 'Doe',
	age: 30,
	hobbies: ['music', 'movies', 'sports'],
	address: {
		street: '50 main st',
		city: 'Boston',
		state: 'MA'
	}
}

console.log(person);
console.log(person.firstName, person.lastName);
console.log(person.hobbies[1]);
console.log(person.address.city)

// Destructuring 
const {firstName, lastName, address: {city}} = person; //pulling things

console.log(city);

person.email = 'J.Doe@gmail.com';

console.log(person)

// ARRAY OF OBJECTS

const todos= [
	{
		id: 1,
		text: 'take out the trash',
		isCompleted: true,
	},
	{
		id: 2,
		text: 'meeting with boss',
		isCompleted: true,
	},
	{
		id: 3,
		text: 'dentist appointment',
		isCompleted: false
	}
]

console.log(todos[1].text);

// CONVERTING TO JSON FORMAT

const todoJSON = JSON.stringify(todos);
console.log(todoJSON);

// LOOPING ARRAYS - FOR LOOPS


//  FOR LOOPS

	for(let i = 0; i <= 10; i++) {
/* 
first parameter: assignment of variable- the iterable
second parameter: condition that needs to be met
third parameter: increment i++ adds one to i variable
runs until the condition is true
*/

console.log(`For loop number ${i}`);
}

// WHILE LOOPS

let i = 0

while(i <= 10) {
	console.log(`While loop number ${i}`);
	i++;

}

// LOOPING THROUGH ARRAYS

for(let i = 0; i < todos.length; i++) {
	console.log(`For loop number ${i}`);
}

for(let i = 0; i < todos.length; i++) {
	console.log(todos[i].text);
}

//  FOR OF LOOP

for(let todo of todos) {
	console.log(todo)
}

for(let todo of todos) {
	console.log(todo.text)
}

for(let todo of todos) {
	console.log(todo.id)
}


//  HIGH ORDER ARRAY METHODS (Suggested way to do iterations with arrays)

// FOR EACH - LOOPS THROUGH THEM
todos.forEach(function(todo) {
	console.log(todo.text);
});

// MAP - ALLOWS US TO CREATE A NEW ARRAY FROM AN ARRAY
const todoText = todos.map(function(todo) {
	return todo.text;
});

console.log(todoText);

// FILER - ALLOWS US TO CREATE A NEW ARRAY BASED ON A CONDITION

const todoCompleted = todos.filter(function(todo) {
	return todo.isCompleted === true;
});

console.log(todoCompleted);

// CHAINING ONTO FILTER METHOD WITH MAPPING FOR ONLY TEXT

const todosCompleted = todos.filter(function(todo) {
	return todo.isCompleted === true;
}).map(function(todo){
	return todo.text;
});

console.log(todosCompleted);

// CONDITIONALS
const numberTen = '10';
const numberTwenty = 20;
const numberFour = 4;
const numberEleven = 11;
const numberSix = 6;

// Double equals does not match datatypes, only value
if(numberTen == 10) {
	console.log('x is 10 duh')
}

// Triple equals matches datatypes
if(numberTen === 10) {
	console.log('numberTen is 10 duh')
} else if(numberTwenty > 10) {
	console.log('numberTwenty is greater than 10, gang')
} else; {
	console.log('numberTwenty less than 10')
}

// OR - ONE of them has to be true
if(numberFour > 5 || numberEleven > 10) {
	console.log('number 10 is more than 5 or number 10 is more than 10')
}

// && - BOTH of them have to be true
if(numberSix > 5 && numberEleven > 10) {
	console.log('number 6 is more than 5 AND number 10 is more than 10')
}

// NESTED IF STATEMENTS 

if(numberTen > 5) {
	if(numberTwenty > 10){
		console.log("Ngl this is kinda icky.")
	}
}


// TURNARY OPPERATIOR - Shorthand If Statement - Used to assign variables based on a condition 
const colour = numberEleven > 10 ? 'red' : 'blue';

console.log(colour)

// SWITCHES

switch(colour) {
	case 'red':
		console.log("Colour is red.");
		break;
	case 'blue':
		console.log("Colour is blue")
		break;
	default:
		console.log("Colour is NOT red or blue.")
		break;
}

// FUNCTIONS 

function addNums(num1, num2) {
	console.log(num1 + num2);
}

addNums(5,4);

// NaN means Not a Number

function addNums(num1, num2) {
	console.log(num1 + num2);
}

addNums();

function addNums(nums1 = 1, nums2 = 1) {
	return(nums1 + nums2);
}

console.log(addNums());

// ARROW FUNCTIONS

const addition = (num1 = 5, num2 = 1) => {
	return num1 + num2
}

console.log(addition());


const subtraction = (num1 = 5, num2 = 1) => console.log(num1 - num2);

subtraction();
