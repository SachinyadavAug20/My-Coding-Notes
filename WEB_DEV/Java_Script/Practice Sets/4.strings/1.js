
console.log("This is about arrays");
let user_name ="Sachin yadav";
console.log(user_name.length);
let word='OpuntianDillania';
let a=`this is ${user_name} will printed like in C++ we do %d`;
console.log(`\n${a}\n${word}\n\"THis\"  `);
console.log(`\n${user_name}\'s computer has arch and neovim`);
console.log(`\thave a tab indinet\'s is good`);
console.log(`${user_name.toUpperCase()}`);
console.log(`${user_name.toLowerCase()}`);
console.log(`${user_name.slice(2,5)}`); //chi
console.log(`${user_name.slice(3)}`); //hin
console.log(`${user_name.concat(" ",word," ","Ooo")}`); //sachin OpuntianDillania Ooo

console.log(`${user_name}`); //strings are immutable ==> sachin


console.log("har\"".length);//and ==> 4

//use includes, startwith and endwith fn
//str.includes(searchString[, position_from_where_to_start_search])
console.log(user_name.includes("yadav",5)) //true

console.log(user_name.startsWith("S")) //true
console.log(user_name.endsWith("yadav")) //true

//extract price from string
let statement="Please give Rs 1000";
let price =parseInt(statement.slice(15));
console.log(price);
