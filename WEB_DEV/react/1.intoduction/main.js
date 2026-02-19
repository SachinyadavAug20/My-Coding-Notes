console.log("Hello react");
const express = require('express')
const app = express()
const port = 5000

app.get('/withreact', (req, res) => {
    res.sendFile("index.html",{root:__dirname})
})


app.get('/withoutreact', (req, res) => {
    res.sendFile("withoutreact.html",{root:__dirname})
})

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})
