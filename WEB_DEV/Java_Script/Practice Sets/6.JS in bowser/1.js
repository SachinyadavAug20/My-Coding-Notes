function driving_check(){
console.log("Web and js intersection");
let age = prompt("Enter your age");
if(age<=0){
    console.error("age can't be negative");
        return 0;
}
alert(age>18?"Can drive":"you can't drive");
}
driving_check();
let o=confirm("Do you want to see promt again");
o==true?driving_check():console.log("Done");

