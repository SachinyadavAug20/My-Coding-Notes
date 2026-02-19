console.log("JavaScript variables");
var a = 6;
var b = 7;
var c = " Samtagon";
var _hii = 57;
var $sp = "omg";
// var 66is=657; this is invalid name
console.log(a + b + 7 + c);

console.log(typeof a, typeof b, typeof c);

const a1 = 3.14;
// a1=a1+1; this is not allowed, cause error in the console
{
    let x = 38;
    var y1 = 27;
}
console.log(y1);// display as var has global scope
// console.log(x);//error x is not defined in context as let has block scope

console.log("********************************* SEPERATION **************************");

let x = "Harry bhai";
let y = 67;
let z = 7.52;
const tu = true;
let q = undefined;
let r = null;
console.log(x + " is " + typeof x);
console.log(y + " is " + typeof y);
console.log(z + " is " + typeof z);
console.log(tu + " is " + typeof tu);
console.log(q + " is " + typeof q);
console.log(r + " is " + typeof r);

let o = {
    name: "harry",//not used "name" as it is singe word, can also write as "name"
    "job code": "555",
    "user name":"smatagon75",
    "is handsome":true
}
console.log(o);
o.salary="100cr";
console.log(o);
o.salary="500cr";
console.log(o);
console.log(3**3);

