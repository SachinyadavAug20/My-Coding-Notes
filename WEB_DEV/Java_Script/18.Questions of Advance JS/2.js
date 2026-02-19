//The Double Trouble: You are tasked with writing a function that doubles each element in an array. However, there's a catch: if the array contains consecutive duplicate elements, only double one of them.
let nums=[1,4,2,7,3,6,7,82,13,687,1,3,53,77,33,33,436,46,23,6,62,112,11,1,654,244]
console.log(nums);
console.log(nums.map((a)=>{return 2*a}));//but it don't follow the catch condition
for(let i=0;i<nums.length;i++){
    if(nums[i]==(nums[i-1]/2)){
        continue;
    }
    nums[i]*=2;
}
console.log(nums);
