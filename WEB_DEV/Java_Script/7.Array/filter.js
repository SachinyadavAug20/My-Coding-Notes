let arr = [1, 2, 55, 3, 7, 8,, 235, 11]

console.log(arr);
const Greaterthanseven = (e) => {//variable as a function
    if (e >= 7) {
        return true;
    }
    else {
        return false;
    }
}
console.log(arr.filter(Greaterthanseven));
//OR
console.log(arr.filter((e) => {
    if (e >= 7) { return true; }
    else { return false; }
}));

console.log(arr.reduce((a,b)=>{
    return a*b;//product of all elemnets
}))
console.log(arr.reduce((a,b)=>{
    return a+b;//addition of all elememts
}))
let a=Array.from("hello")
console.log(a);
