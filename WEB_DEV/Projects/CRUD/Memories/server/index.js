import express from 'express'
import bodyParser from 'body-parser'
import mongoose from 'mongoose'
import cors from 'cors'
import postRoutes from './routes/posts.js'

const app=express()
app.use("/posts",postRoutes)
app.use(bodyParser.json({limit:"30mb",extended:true}))
app.use(bodyParser.urlencoded({limit:"30mb",extended:true}))
app.use(cors)

const CONNECT_STRING="mongodb+srv://SachinYadav:SachinYadav15111977@memories.d9zcvtr.mongodb.net/?appName=Memories"
const PORT =process.env.PORT || 5000

mongoose.connect(CONNECT_STRING)
.then(()=>app.listen(PORT,()=>console.log(`Server runing on port ${PORT}`)))
.catch((error)=>console.log(error.message))
