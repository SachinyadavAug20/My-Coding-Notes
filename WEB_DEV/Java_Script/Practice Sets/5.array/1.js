console.log("This is about array");
let fruit = ["Harry", "apple", "Watermelon", "grapes", "banana"];
const a = [false, "hello", 72];
//console.log(fruit, a);

console.log(fruit.join("-"));

fruit.pop();
console.log(fruit);

fruit.push("NOO");
console.log(fruit);

fruit.shift();
console.log(fruit);

fruit.unshift("NOO");
console.log(fruit);

delete fruit["Harry"];
console.log(fruit);

fruit.push("NOO");
console.log(fruit);

console.log(fruit.concat(a));

let nums=[5,2,56,23,776,23,64,132,64,22,402,94,93];
console.log(nums);
nums.sort((a,b)=>{return a-b});
console.log(nums);

nums.sort((a,b)=>{return b-a});
console.log(nums);

nums.splice(2,3,"X","Y","Z");
console.log(nums);

console.log(nums.slice(2,5))
console.log(nums);
console.log(nums.reverse());

fruit.forEach(element => {
    console.log(element," is ",element.length," character long");
    
});

console.log(nums.map((value,index)=>{
    return value+index
}))

//try to filter all even numbers from nums array
console.log(nums.filter((a)=>{
    return a%2==0;
}))
console.log(nums.filter((a)=>{
    return a%2!=0;
}))

nums=nums.filter((a)=>{
    return a%1==0;
})
console.log(nums);
console.log(nums.reduce((a,b)=>{
    return a+b;
}))

