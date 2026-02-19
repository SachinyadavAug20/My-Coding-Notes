const express = require('express');
const blogs=require("./routes/blog.js")
const shop=require("./routes/shop.js")
const app = express()
const port = 3000

app.use(express.static("public"))

app.use("/blog",blogs)//blogs end point handled by blogs module
app.use("/shop",shop);

app.get('/', (req, res) => {
   console.log("this is a get request")
   res.send('Hello World this is a get requeszt')
}).post('/', (req, res) => {
   console.log("this is a post request");
   res.send('Hello World post!')
})//this is also a valid syntax in JS chaining of requests
app.put("/",(req,res)=>{
   console.log("this is a put request")
   res.send('Hello this is a put request!');
})
app.get('/index',(req,res)=>{
   console.log("this is a index.html")
   res.sendFile('template/index.html',{root:__dirname});
})
app.get('/api',(req,res)=>{
   console.log("this is a index.html")
   res.json({a:1,b:2,c:3,name:"goodboi52",r:["ram","sham","ghansham"]});
})





app.listen(port, () => {
   console.log(`Example app listening on port ${port}`)
})

