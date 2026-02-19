let num=14;
//to find is it divisible by 2 and 3
let isdivisibeby2and3=0;
if(num%2==0){
    if(num%3==0){
        isdivisibeby2and3=1;
    }
}
console.log("Number is divisible by 2 and 3",isdivisibeby2and3);

//check if divisble by 2 or 3
let isdivisibeby2aor3=0;

if(num%2==0){
    isdivisibeby2aor3=1;
    if(num%3==0){
            isdivisibeby2aor3=1;
        }
    }
    console.log("Number is divisible by 2 or 3",isdivisibeby2aor3);

let age=19;
console.log(age>=18?"You can drive":"you can't drive");