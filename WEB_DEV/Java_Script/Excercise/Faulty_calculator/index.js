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

function sum(a,b){
    let chance=Math.random();
    console.log(chance);
    if(chance<0.1){
        return a-b;
    }
    else{
        let x="+";
        return eval(`${a} ${x} ${b}`);
    }
}
function subract(a,b){
    let chance=Math.random();
    console.log(chance);
    if(chance<0.1){
        return a/b;
    }
    else{
        return a-b;
    }
}
function Multiply(a,b){
    let chance=Math.random();
    console.log(chance);
    if(chance<0.1){
        return a+b;
    }
    else{
        return a*b;
    }
}
function divde(a,b){
    let chance=Math.random();
    console.log(chance);
    if(chance<0.1){
        return a**b;
    }
    else{
        return a/b;
    }
}
function expo(a,b){
    let chance=Math.random();
    console.log(chance);
    if(chance<0.1){
        return a/b;
    }
    else{
        return a**b;
    }
}
while(1){
    //take user inputs
let a =prompt("Enter first number");
let operation=prompt("Enter operattion(+,-,*,/,^)");
let b=prompt("Enter second number");
//conditions
function result(a,b,operation,fn){
    console.log(a,operation,b,"=",fn(a,b))
}
if(operation=="+"){result(a,b,"+",sum)}
else if(operation=="-"){result(a,b,"-",subract)}
else if(operation=="*"){result(a,b,"*",Multiply)}
else if(operation=="/"){result(a,b,"/",divde)}
else if(operation=="^"){result(a,b,"^",expo)}
else{console.log("invalid inputs")}

}