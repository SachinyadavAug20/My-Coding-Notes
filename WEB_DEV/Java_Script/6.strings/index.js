console.log("hello string");

let a="Harry";
console.log(a);
console.log(a[0]);
console.log(a[1]);
console.log(a[2]);
console.log(a[3]);
console.log(a[4]);
// console.log(a[5]);===> undefined
console.log(a.length);

let real_name="sachin";
let friend="harry";
console.log("his name is ",real_name,"and his friend is ",friend);
console.log(`His name is ${real_name} and his "friend" is ${friend}`);//template literals called as string interpolation

a=`this is a "is" a good string\n\\n`;
console.log(a);
//OR way
a="this is a \"is\" a good string \n\\n";
console.log(a);

console.log(real_name.toUpperCase());
console.log(real_name.toLowerCase());
console.log(real_name.slice(1,5));//get index 1,2,3,4th character from string
console.log(real_name.slice(3))//get index 3,4,5 till end all caharcter of the string
let b="there is a good man, that is a wise man word";
console.log(b);
console.log(b.replace("man","woman"));//replaces only first occurance of this "man"

real_name="harry";
console.log(real_name.concat("code","with"," Really"));//can also use + operator
a="   harry    ";
console.log(a);
console.log(a.trim());
//strings are immutable
console.log(a);
console.log(b);
console.log(real_name);
console.log(friend);
console.log(friend);

