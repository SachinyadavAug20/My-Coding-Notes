import postmessage from "../models/postmessage.js"

export const getposts=async(req,res)=>{
    console.log(req)
    try {
        const postmessages=await postmessage.find();  // takes time
        res.status(200).json(postmessages);
        
    } catch (error) {
        res.status(404).json({message:error});
    }

}

// https://httpstatuses.io/
// https://www.restapitutorial.com/httpstatuscodes

export const createPost=async(req,res)=>{
    const post =req.body;
    console.log(post)

    const newPost=new postmessage(post);
    try {
        await newPost.save();
        res.status(201).json(newPost);
    } catch (error) {
        res.status(409).json({message:error.message})
    }
}
