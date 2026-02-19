console.log("Hello Array");

let arr=[1,2,3,4,5,6,7,8];
     //  0,1,2,3,4,5,6,7
console.log(arr,typeof arr);
console.log(arr.length);
console.log(arr[0]);
arr[2]=65;//strings are imutable and array are mutable
for(let i=0; i<arr.length; i++){
    console.log(arr[i]);
}

//Functions of array
let a=["hii","I","am","good"];
console.log(a);
console.log(a.toString());
console.log(a.join(" and "));

a.pop();//by deafult pop last 
console.log(a);
a.push("ooooo");
console.log(a);
