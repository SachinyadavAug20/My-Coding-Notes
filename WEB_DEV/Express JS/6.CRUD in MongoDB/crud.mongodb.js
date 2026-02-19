
use("CRUDdb");
                           //CREAT OPERATIONS
db.cats.insertOne({
   name: "kitty",
   weight: "20kg",
   height: "10ft",
   ears: 2,
   legs: 4,
   nose: 1,
   mouth: 1
})
db.hourses.insertMany([
   {
      name: "kitty",
      weight: "20kg",
      height: "10ft",
      ears: 2,
      legs: 4,
      nose: 1,
      mouth: 1
   },
   {
      name: "tiger",
      weight: "90kg",
      height: "4ft",
      ears: 2,
      legs: 4,
      nose: 1,
      mouth: 1
   },
   {
      name: "elephant",
      weight: "5000kg",
      height: "10ft",
      ears: 2,
      legs: 4,
      nose: 1,
      mouth: 1
   },
   {
      name: "dog",
      weight: "15kg",
      height: "3ft",
      ears: 2,
      legs: 4,
      nose: 1,
      mouth: 1
   },
   {
      name: "lion",
      weight: "190kg",
      height: "4ft",
      ears: 2,
      legs: 4,
      nose: 1,
      mouth: 1
   },
   {
      name: "giraffe",
      weight: "800kg",
      height: "18ft",
      ears: 2,
      legs: 4,
      nose: 1,
      mouth: 1
   },
   {
      name: "rabbit",
      weight: "2kg",
      height: "1ft",
      ears: 2,
      legs: 4,
      nose: 1,
      mouth: 1
   },
   {
      name: "panda",
      weight: "100kg",
      height: "3ft",
      ears: 2,
      legs: 4,
      nose: 1,
      mouth: 1
   },
   {
      name: "horse",
      weight: "400kg",
      height: "6ft",
      ears: 2,
      legs: 4,
      nose: 1,
      mouth: 1
   },
   {
      name: "cow",
      weight: "350kg",
      height: "5ft",
      ears: 2,
      legs: 4,
      nose: 1,
      mouth: 1
   }

])

                        //READ OPERATIONS
let a=db.hourses.find({legs:4});
console.log(a.toArray().length, db.hourses.find({height:"3ft"}).toArray().length);
let b =db.hourses.findOne({height:"3ft"});
console.log(b)

                        //UPDATE OPERATIONS
db.hourses.updateOne({height:"1ft"},{$set:{height:"not existing"}});//convert one first 1ft one with this
db.hourses.updateMany({ears:2},{$set:{ears:"normal"}});
db.hourses.updateMany({nose:1},{$unset:{nose:""}});//remove nose element from all objs

                        //DELETE OPERATIONS
db.hourses.deleteOne({height:"6ft"});
// db.hourses.deleteMany({nose:1});
