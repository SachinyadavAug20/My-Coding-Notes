/* Create a faulty calculator using JavaScript

This faulty calculator does following:
1. It takes two numbers as input from the user
2. It perfoms wrong operations as follows:

+ ---> -
* ---> +
- ---> /
/ ---> **


It performs wrong operation 10% of the times

*/

//lets take inputs
let a = prompt("Enter first number");
let operation = prompt("Enter operattion(+,-,*,/,^)");
let b = prompt("Enter second number");
//store random
let random = Math.random();
let obj = {
    "+": "-",
    "*": "+",
    "-": "/",
    "/": "**"
}
if (random < 0.1) {
    // perform wrong operation 
    operation = obj[operation];
}
else {
    //perform right operation
}
alert(`the result is ${eval(`${a} ${operation} ${b}`)}`)