const express = require('express')
const path = require('path');
const { title } = require('process');
const app = express()
const port = 3000

app.set('view engine', 'ejs');
app.set("views", path.join(__dirname, "views"));
let arr = [12, 234, 532, 35, 564, 213, 726, 273, 2783,0947, 351, 121, 4395834, 121, 437, 74565, 2342];

app.get('/', (req, res) => {
   let sitename = "Aadidads";
   let searchname = "Search Now";
   res.render("index", { title: sitename, by: searchname, mode: "Light", arr: arr });
})

app.get('/blog/:title', (req, res) => {
   //the data which index.html may need so how to make it access it
   let blogtitle = req.params.title;
   let blogcreaded = req.query.by;
   let mode = req.query.mode;
   console.log(blogtitle, blogcreaded);
   res.render("index", { title: blogtitle, by: blogcreaded, mode: mode, arr: arr });
   // res.sendFile("./templates/index.html", { root: __dirname });
})

app.listen(port, () => {
   console.log(`Example app listening on port ${port}`)
})

