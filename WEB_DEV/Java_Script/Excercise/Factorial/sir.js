let a = prompt("Enter number")

function factorial(number) {
    let arr = Array.from(Array(number + 1).keys());
    console.log(arr);
    let c= arr.slice(1,).reduce((A, B) => A*B );
    return c;
}
//OR
let arr2 = [];//empty array
for (let i = a; i; i--) {
    arr2.push(i);
}
let afactorial = arr2.reduce((a, b) => { return a * b; })
console.log(afactorial);
alert("Factorial by loop :" + afactorial);
alert("Factorial by reduce :" + factorial(a));
// console.log("hd");
