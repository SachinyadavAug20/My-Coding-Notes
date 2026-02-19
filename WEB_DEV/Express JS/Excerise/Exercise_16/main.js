// Generate a dummy data in this format in a collection called employees in a db called company

// {
//     name: "Harry",
//     salary: 45000000,
//     language: "Python",
//     city: "New York",
//     isManager: true
// }

// Generate 10 such records when a button called generate data is clicked!
// Create an Express app with mongoose to acheive it
// Everytime the button is clicked, you should clear the collection 
const nams = ["Harry", "Rohan", "Emily", "Sophia", "Lucas", "Mia", "Ethan", "Isabella", "Liam", "Ava", "Mason", "Zoe", "Noah", "Lily", "Oliver", "Ella", "James", "Grace", "Benjamin", "Aria", "Jacob", "Scarlett", "Elijah", "Chloe", "Alexander", "Emma", "Daniel", "Charlotte", "Anthony", "Madison", "William", "Layla", "Michael", "Nora", "Aiden", "Hazel", "Lucas", "Stella", "Jackson", "Addison", "Samuel", "Aurora", "David", "Leah", "Gabriel", "Lucy", "Caleb", "Hannah", "Nathan", "Grace", "Isaac", "Ruba", "Wyatt", "Victoria", "Carter", "Alice", "Jaxon", "Isla", "Leo", "Serenity", "Julian", "Skylar", "Connor", "Ellie", "Christian", "Mila", "Joshua", "Sienna", "Hunter", "Penelope", "Thomas", "Lila", "Charles", "Kinsley", "Christian", "Everly", "Jordan", "Cora", "Asher", "Gianna", "Charles", "Clara", "Leo", "Samantha", "Eli", "Brielle", "Adam", "Harmony", "Ian", "Lyla", "Nicholas", "Dahlia", "Max", "Poppy", "Ayden", "Tessa", "Eli", "Emilia", "Hudson", "Talia"];
const languages = ["Python", "Java", "JavaScript", "C", "C++", "C#", "Ruby", "PHP", "Swift", "Go", "Kotlin", "Scala", "Rust", "TypeScript", "Perl", "R", "Haskell", "Lua", "Dart", "Elixir", "Visual Basic", "Objective-C", "Assembly", "Julia", "SQL", "F#", "Groovy", "Scratch", "Clojure", "Scheme", "Smalltalk", "Ada", "COBOL", "Fortran", "Prolog", "Common Lisp", "OCaml", "Solidity", "Tcl", "Nim", "Crystal", "Pike", "ActionScript", "Q#", "LabVIEW", "Bash", "AWK", "SML", "APL"];
const cities = ["New York", "Los Angeles", "Chicago", "Houston", "Phoenix", "Philadelphia", "San Antonio", "San Diego", "Dallas", "San Jose", "Austin", "Jacksonville", "San Francisco", "Columbus", "Fort Worth", "Indianapolis", "Charlotte", "Seattle", "Denver", "Washington D.C.", "Boston", "El Paso", "Detroit", "Nashville", "Memphis", "Baltimore", "Milwaukee", "Albuquerque", "Tucson", "Fresno", "Sacramento", "Long Beach", "Kansas City", "Mesa", "Virginia Beach", "Atlanta", "Colorado Springs", "Omaha", "Raleigh", "Miami", "Cleveland", "Virginia Beach", "Tulsa", "Oakland", "Minneapolis", "Wichita", "New Orleans", "Arlington"];

let randomPicker=(arr)=>{
	let rand=Math.floor(Math.random()*(arr.length-1));
	return arr[rand];
}

//Express app
import express from 'express';
import { fileURLToPath } from 'url';
import mongoose from 'mongoose';
import path from 'path';
import { detail } from './models/detail.js';
const conn = await mongoose.connect("mongodb://localhost:27017/Company");

const __filename = fileURLToPath(import.meta.url);
const __dirname = path.dirname(__filename);

const app = express()
const port = 3000
app.set('view engine', 'ejs');

app.get('/', (req, res) => {

	res.render("index");
})
app.get('/generate', async (req, res) => {
	await detail.deleteMany();
	for (let i = 0; i < 10; i++) {
		let rand4 = Math.round(Math.random() * 1000000) + 10000;
		let info = new detail({ name: randomPicker(nams), salary: rand4, language: randomPicker(languages), city: randomPicker(cities), isManager: Math.random()>0.5?true:false })
		await info.save();
	}
	res.render("done");
})
app.listen(port, () => {
	console.log(`Example app listening on port ${port}`)
})


