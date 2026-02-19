import mongoose from "mongoose";
let detailschema=new mongoose.Schema({
   name:{type:String,required:true,default:"Person X"},
   salary:{type:Number,required:true,default:"000"},
   language:{type:String,required:true,default:"JS"},
   city:{type:String,required:false,default:"Mumbai"},
   isManager:{type:Boolean,required:true,default:false}
});
export const detail=mongoose.model("Empolyee",detailschema);
