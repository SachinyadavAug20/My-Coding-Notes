// MODULE method to import node.js module
// import { createServer } from "http"
// import {a} from "./mymodule.js";
// import {b} from "./mymodule.js";
// import {c} from "./mymodule.js";
// import {d} from "./mymodule.js";
// import {a,b,c,d} from "./mymodule.js"
// import art from "./mymodule.js";//deafult import

// CommonJS method to import modules
const { createServer } = require('node:http');
let fs = require("fs")
let a=require("./mymodule2.js")

const hostname = '127.0.0.1';
const port = 3000;

const server = createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/html');
  res.end(`<h1>My First Heading</h1><h2>hello world</h2> <p>My first paragraph.</p>`);
});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
   console.log(a);
   console.log(__dirname,"\n",__filename,"\n",exports);
});

