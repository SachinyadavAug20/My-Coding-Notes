//The Sum Selector: You are working on a function that should sum all numbers in an array until it encounters a negative number. Write a function that performs this summation.
let nums=[1,2,34,1,313,321,45,353,36,54,36,235,25,23,346,23,7,567,-4,534,234,53,35,23];
console.log(nums.reduce((a,b)=>{return a+b}));
let nums_till_negative_comes=[],i=0;
while(nums[i]>=0){
    nums_till_negative_comes[i]=nums[i];
    i++;
}
console.log(nums.filter((a)=>{return a>=0}).reduce((a,b)=>{return a+b}));
console.log(nums_till_negative_comes.reduce((a,b)=>{return a+b}));

