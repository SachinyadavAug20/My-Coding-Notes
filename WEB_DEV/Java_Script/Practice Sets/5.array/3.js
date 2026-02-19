console.log("Factorial fining by reduction of an array");
let num=prompt("Enter the number whose factorial to find :");
//to find 12 Factorial
let  nums=[];
for(let i=1,j=0;i<=num;i++){
    nums[j]=i;
    j++;

}
console.log(nums);
alert("factorial is "+nums.reduce((a,b)=>{return a*b}));

