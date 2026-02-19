console.log("hello loops");
let a = 1;
console.log(a++);
console.log(a++);
console.log(a++);
console.log(a++);
console.log(a++);
console.log(a++);
console.log(a++);
console.log(a++);
console.log(a++);
console.log(a++);
// OR 
x=1;
for (let i = 0; i < 10; i++) {
    if((i+x)==1){
        console.log((x+i)+"st iteration");
        continue;
    }
    else if((i+x)==2){
        console.log((x+i)+"nd iteration");
        continue;
    }
    else if((i+x)==3){
        console.log((x+i)+"rd iteration");
        continue;
    }
    else{
        console.log((x+i)+"th iteration");  
    }
}

// for in loop
let obj={
    name:"harry",
    role:"programer",
    company:"codewithharry AI",
    salary:"infinite",
    address:"14 hill road whitehouse Washington DC, USA"
}
for (const key in obj) {
        console.log(key+" is "+obj[key]);        
        // same as this console.log(key," is ",element);        
        
}
for (const letter of "harry") {
    console.log(letter);
}

let num=10;
while(num)
{
    console.log(num);
    num--;
}
num--;
do {
    num++;
    console.log(num);
    
} while (num<10);