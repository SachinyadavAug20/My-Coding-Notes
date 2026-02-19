console.log("This is a number gussing game between 1 to 100");
alert("Number gussing game Btw 0 to 100");
let usr_num,n=1;
let num=Math.floor((Math.random()*100)+1);
console.log(num);
let hint;
usr_num=prompt("Enter your First guess");
do{
    if(usr_num>num){
        hint="try lesser";
    }
    else if(usr_num<num){
        hint="try greater"
    }
    usr_num=prompt("hint :",hint,"\nTry again");
    n++;
    if(usr_num==num){
        alert("You won in "+n+" try")
        continue;
    }
}while(usr_num!=num)
