const express = require('express')
const { request } = require('http')
const app = express()
const port = 3000
app.use(express.static('public'))
//app.get(path,handle) app.put(path,handle) app.post(path,handle) app.delete(path,handle)
app.get('/home', (req, res) => {
  res.send('<h1 style="border: 2px solid black;background-color: aqua;padding: 47px;display: inline;margin: 50px;">Hello World123!</h1>')
})
app.get('/contact', (req, res) => {
  res.send('<h1 style="border: 2px solid black;background-color: aqua;padding: 47px;display: inline;margin: 50px;">Contact me</h1>')
})
app.get('/service', (req, res) => {
  res.send('<h1 style="border: 2px solid black;background-color: aqua;padding: 47px;display: inline;margin: 50px;">This is a service</h1>')
})
app.get('/blog', (req, res) => {
  res.send('<h1 style="border: 2px solid black;background-color: aqua;padding: 47px;display: inline;margin: 50px;">Bloger are found here</h1>')
})
app.get('/blog/intro-to-js', (req, res) => {
  res.send('<h1 style="border: 2px solid black;background-color: aqua;padding: 47px;display: inline;margin: 50px;">JS is an awsome language working on V8 engine of chrome</h1>')
})
app.get('/blog/intro-to-css', (req, res) => {
  res.send('<h1 style="border: 2px solid black;background-color: aqua;padding: 47px;display: inline;margin: 100px;">Css is used to manage style is website</h1>')
})
app.get('/blog/intro-to-python', (req, res) => {
  res.send('<h1 style="border: 2px solid black;background-color: aqua;padding: 47px;display: inline;margin: 50px;">Phython is an azsomes language</h1>')
})
//THIS WORKS BUT HARD TO MANAGE
//use parameter and qeries
app.get('/blog/:slug', (req, res) => {
    // logic to fetch {slug} from the db
    // For URL: http://localhost:3000/blog/intro-to-padosi?mode=dark&region=in
    console.log(req.params) // will output { slug: 'intro-to-padosi' }
    console.log(req.query) // will output { mode: 'dark', region: 'in' }
   res.send(`<h1 style="border: 2px solid black;background-color: aqua;padding: 47px;display: inline;margin: 50px;">${req.params.slug} is not is our knowlege( i.e ${req.params.slug} is not found )</h1>`)
})//here,slug is a parameter
app.get('/blog/:slug/:sec', (req, res) => {
   console.log(req);
  res.send(`<h1 style="border: 2px solid black;background-color: aqua;padding: 47px;display: inline;margin: 50px;">There is a ${req.params.slug} in ${req.params.sec}</h1>`)
})




app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})

