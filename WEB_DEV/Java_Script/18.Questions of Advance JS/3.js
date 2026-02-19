//The Mirror Mirror: Imagine you have a string, and you need to create a new string that is a mirror image of the original. Write a function that appends the reversed version of the original string to itself.
function mirror_string_maker(s){
    return s.concat((Array.from(s)).reverse().join(""));
}

let string="Harry";
console.log(mirror_string_maker(string));

