import e from "express";
import {getposts,createPost} from '../controllers/posts.js'
const router =e.Router();


router.get("/",getposts)
router.post("/",createPost)
export default router
