let a=prompt("Enter first number");
let b=prompt("Enter second number");

if(isNaN(a) || isNaN(b)){
    throw SyntaxError("Sorry this is not allowed");
}
function main(){

    let sum=a+b;
    console.log(`the sum is ${sum}`);
    //it append not adds 1+1==11
    //by default appent 2 strings
sum=parseInt(a)+parseInt(b);
console.log(`the sum is ${sum}`);
try {
    console.log(`the sum is ${sum*x}`);
    return true;
    
} catch (error) {
    console.log("error aa gaya bhai")
    return false;
}
finally{
    console.log("files are being closed and db connection is being closed")
}
}
console.log(main());

