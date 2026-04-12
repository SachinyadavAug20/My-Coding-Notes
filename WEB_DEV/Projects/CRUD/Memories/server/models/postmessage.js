import mongoose from "mongoose";


// schema to make like OPPS and struct
const PostSchema=mongoose.Schema({
    title:String,
    message:String,
    creator:String,
    tags:[String],
    selectedFile:String,  // will convert img to string
    likeCount:{
        type:Number,
        default:0
    },
    createdAt:{
        type:Date,
        default:new Date()
    }
})


// convert schema to model
const postmessage=mongoose.model("Postmessage",PostSchema)

export default postmessage // on model can do CRUD
