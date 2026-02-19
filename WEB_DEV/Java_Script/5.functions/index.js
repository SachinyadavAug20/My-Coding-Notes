console.log("Hello fuctions");

function complement(name){    
    console.log("hey",name,"you name is nice");
    console.log(name,"is a good person");
    console.log("Bperson on plant is ",name);
}
function sum(a,b,c=7){//kept c as an optional parameter
    console.log(a,"+",b,"=",a+b+c-c);
    return a+b;

}
complement("Harry");
complement("Rohan");
complement("Shivam");
sum(56); 
sum(54,23); 
sum(56,23,123);
let result =sum(567,648);
console.log(result);

// Arrow function 
const func1 =(x)=>{
    console.log("************************* ARROW FUNCTION *************************",x);
    
}
func1(54);
func1(5);
func1(4);