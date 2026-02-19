const fs = require("fs");
// console.log(fs);
// fs.writeFileSync("names.txt","Rohan harry sachin tushar");
// fs.writeFileSync("hello.txt","hello world");
console.log("start");
fs.writeFile("artical.txt", "me and the bois", () => {
   console.log("writting done");
   fs.readFile("artical.txt", (error, data) => {
      console.log(error, data);
      console.log(data.toString())
   })
})
console.log("end");
//CALLBACK HELL 
// fs.writeFile("1.txt", "this is 1", () = {
//    fs.readFile("1.txt", (data error)=>{
//    fs.writeFile("2.txt", "2", () => {
//       fs.writeFile("1.txt", "this is 1", () = {
//          fs.readFile("1.txt", (data error)=>{
//          fs.writeFile("2.txt", "2", () => {
//             fs.writeFile("1.txt", "this is 1", () = {
//                fs.readFile("1.txt", (data error)=>{
//                fs.writeFile("2.txt", "2", () => {
//                   fs.writeFile("1.txt", "this is 1", () = {
//                      fs.readFile("1.txt", (data error)=>{
//                      fs.writeFile("2.txt", "2", () => {
//                         fs.writeFile("1.txt", "this is 1", () = {
//                            fs.readFile("1.txt", (data error)=>{
//                            fs.writeFile("2.txt", "2", () => {
//
//                            })
//                         })
//                      })
//                   })
//                })
//             })
//          })
//       })
//    })
// })
fs.appendFile("./hello.txt"," appended line ",(e,d)=>{
   console.log(e,d);
})
//try to fill a file of tables of 13
let n=13,i=1;
fs.writeFile("table13.txt","Table of 13\n",(e,d)=>{
   while(i<=10){
   fs.appendFile("./table13.txt",`${n} X ${i} = ${n*i}\n`,(error,data)=>{});
   i++;
   }
})
