import mongoose from "mongoose";
const todoSchema = new mongoose.Schema({
   title: {type:String,required:true,default:"Todo title here"},
   desc:String,
   isdone:Boolean,
   days:{type:Number,required:true,default:1},
   "added on":{type:Date,default:Date.now}
});//Schema is validation that title,desc must be a string not a number
export const Todo = mongoose.model('todo', todoSchema);

