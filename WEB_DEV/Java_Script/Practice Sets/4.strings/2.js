console.log("This will invert string");
let usr_name= "Sachin";
let sur_name= "Yadav";
//change 4th character to X
console.log(usr_name.slice(0,2).concat("X",usr_name.slice(3)));
//invert the string usr_name
console.log(usr_name.split("").reverse().join(""));
/*
As array.reverse() is a fn of array not string thus
split("") → converts string into an array of characters.
reverse() → reverses the array in place.
join("") → joins the array back into a string.
*/

