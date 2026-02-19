const express = require('express');
const app = express()
const blogs=require("./routes/blog.js");
const fs =require("fs");
const port = 3000
app.use(express.static("public"));

//urs loging time
fs.writeFileSync("logs.txt","this are user logs\n");
app.use((req,res,next)=>{
   //store this logs
   fs.appendFileSync("./logs.txt",`at ${Date.now()}ms from 1st jan 1970 && ${new Date()}, ${req.url} was accessed by ${req.method} method\n`)
   req.sachin=65;//modify the request
   req.harry="Yupboi62 was here";
   // res.send("Hacked by Middlewar 1")
   next();
})
app.use((req,res,next)=>{
   // res.send("Hacked by Middlewar 2")
   next();
})
app.use((req,res,next)=>{//modify this request
   if(req.url=="/hom"){
      req.url="/home"//save user by typo
   console.log("his redirect /hom to /home");
      next();
   }
   else{
      next();
   }
})

app.use("/blog",blogs);
app.get('/',(req,res)=>{
   res.sendFile("/home/sachin/Sachin/learning/programming/WEB_DEV/CSS/Excersices/Multicolor website/index.html");
   console.log(req.sachin);
   console.log(req.harry);
}).get('/home',(req,res)=>{
   res.sendFile("/home/sachin/Sachin/learning/programming/WEB_DEV/CSS/Excersices/bounce animation/sir_index.html");
}).get('/contact',(req,res)=>{
   res.sendFile("/home/sachin/Sachin/learning/programming/WEB_DEV/CSS/Excersices/Basic_layout/index.html");
})
app.get('/about',(req,res)=>{
   console.log(req.query);
   res.sendFile("/home/sachin/Sachin/learning/programming/WEB_DEV/HTML/10/index.html");
})







app.listen(port, () => {
   console.log(`Example app listening on port ${port}`)
})

