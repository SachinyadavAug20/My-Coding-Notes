// import fs from "fs";
// fs.writeFile("text.txt","This is a text file\n",()=>{
//       //this will lead to callback hell
// })

import fs from "fs/promises";


let a= await fs.readFile("./table13.txt")//can do direct await as in module not rquired async function 
let b= await fs.appendFile("./table13.txt","\n\nLearn 13 table for the test");
console.log(b,"\n",a.toString());
 
