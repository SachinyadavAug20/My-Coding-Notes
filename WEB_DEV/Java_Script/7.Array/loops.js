console.log("hello loops in array");
let a = [1, 3, 145, 6, 213, 414, 45, 65, 75];

for (let i = 0; i < a.length; i++) {//traverse the array
    console.log(a[i]);
}

a.forEach((value, index, array) => {
    console.log(value, " is at ", index, "in this array", array);
})

let obj={
    a:1, 
    b:2,
    c:3,
    d:4
}
for (const key in obj) {
    console.log(key,":",obj[key]);
}
for (const iterator of a) {
    console.log(iterator);
}

console.log(a);
a.map((value,index,array)=>{
    return value*value;
})
console.log(a);
