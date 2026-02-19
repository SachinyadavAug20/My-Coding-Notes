// You have to write a Node.js program to clear clutter inside of a directory and organize the contents of that directory into different folders

// for example, these files become:

// 1. name.jpg
// 2. name.png
// 3. this.pdf 
// 4. harry.zip
// 5. Rohan.zip
// 6. cat.jpg 
// 7. harry.pdf

// this: 
// jpg/name.jpg, jpg/cat.jpg 
// png/name.png 
// pdf/this.pdf pdf/harry.pdf
// zip/harry.zip zip/Rohan.zip
console.log("This a clutter managemenet system");
const fs = require("fs");

//THIS IS THE ONLY TO CHANGE FOR THIS TOOL TO WORK WITH
let target_to_clean = "./clutter";

if (!fs.existsSync(target_to_clean)) {
   console.log(`${target_to_clean.slice(target_to_clean.indexOf("/") + 1)} is not a director / folder in this folder!!\nTry again!!`);
}
else {

   let files = fs.readdirSync(target_to_clean, { withFileTypes: true }).filter((e) => {
      return e.isFile();
   }).map((e) => {
      return e.name;
   });
   let extenstions = files.map((e) => {
      return e.slice(e.lastIndexOf("."));
   }).filter((a)=>{
         return a!="js"&&a!="json"
   })//to exclude .js and .json
   //now have files and extension which keep file name and extension name for clutter at same index(mapped)
   let to_creat_dir_name = extenstions.filter((value, index, self) => {
      return self.indexOf(value) === index;//use property of index of which returs only the index of 1st occurance of element
   }).map((e) => {
      return e.slice(e.indexOf(".") + 1);
   })
   console.log(to_creat_dir_name);
   for (const i of to_creat_dir_name) {
      if(fs.existsSync(i)){

      }
      else{
      fs.mkdirSync(i);
      }
   }
   
   //FINAL LOGIC
   for (const i of to_creat_dir_name) {
      files.forEach(element => {
         if(element.includes(i)){
            fs.renameSync(`${target_to_clean}/${element}`,`./${i}/${element}`);//THIS IS THE CUT FUCTIONLITY
         }
      });
   }
}
