//The Magical Sorting Hat: Imagine you are creating a magical sorting hat for a wizard school. Implement a JavaScript function that takes an array of student names and assigns them to one of the four houses (Gryffindor (length less than 6), Hufflepuff(length less than 8), Ravenclaw(length less than 12), or Slytherin(length greater than or equal to 12)) based on the length of their names.
let students=["harry","ram","shubham","sachin","rohan","vivak","anjalii","shavani","shivangi","annapurna","Ramprasadmujargi","Krishnaened","raj","shub","Ravandranathan","Shivas","kaif","Emanual"]
//sol:-

console.log("ALL :"+students);
console.log("Gryffindor :",students.filter((a)=>{return a.length<6}));
console.log("Hufflepuff :",students.filter((a)=>{return a.length<8&&a.length>=6}));
console.log("Ravenclaw :",students.filter((a)=>{return a.length<12&&a.length>=8}));
console.log("Slytherin:",students.filter((a)=>{return a.length>=12}));

//sir:-

let houses = []

for (const student of students) {
    if(student.length < 6){
        houses.push("Gryffindor")
    }
    else if(student.length < 8){
        houses.push("Hufflepuff")
    }
    else if(student.length < 12){
        houses.push("Ravenclaw")
    }
    else{
        houses.push("Slytherin")
    }
}

console.log(houses);
