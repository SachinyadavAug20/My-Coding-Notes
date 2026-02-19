import mongoose from "mongoose";
import express from 'express';
import { Todo } from "./models/todo.js";

const conn = await mongoose.connect("mongodb://localhost:27017/Sachin");
const app = express()
const port = 3000


app.get('/', (req, res) => {
   const todo = new Todo({ title: "Do the exam preparation", desc: "Mid sem exam are tommorow of math and physics", isdone: false, days: Math.floor(Math.random() * 55 + Math.random() * 69) });
   todo.save();
   res.send('Hello World!')
})
app.get('/api', async (req, res) => {
   const todo1 = new Todo({ desc: "Mid sem exam are tommorow of math and physics", isdone: false, days: Math.floor(Math.random() * 55 + Math.random() * 69) });
   const todo2 = new Todo({title:"Do you homework", desc: "doing homework is a way to practice what you learned", isdone: false});
   todo1.save();
   todo2.save();
   Todo.deleteMany({days:69});
   let todo = await Todo.findOne({});
   console.log(todo);
   res.json({ title: todo.title, desc: todo.desc, isdone: todo.isdone, days: todo.days });
})

app.listen(port, () => {
   console.log(`Example app listening on port ${port}`)
})

