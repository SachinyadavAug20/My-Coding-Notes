console.log("This is practice set actually");
let nums_arr=[];
let entey,i=0;

do{
   entey= prompt("Enter the number");
    nums_arr[i]=entey;
    i++;
}while(entey!=0)
console.log("Numbers provided :",nums_arr);
console.log("Numbers divisible by 10 :",nums_arr.filter((a)=>{return a%10==0&&a!=0}))
console.log("Prime numbers :",nums_arr.filter((a)=>{
    let no_of_factors=0;
    for(let i=2;i<a;i++){
        if(a%i==0){
            no_of_factors++;
            break;
        }
    }
    return no_of_factors==0&&a!=0;
}))
console.log("Array of squares of numbers is :",nums_arr.map((value)=>{return value*value}))

