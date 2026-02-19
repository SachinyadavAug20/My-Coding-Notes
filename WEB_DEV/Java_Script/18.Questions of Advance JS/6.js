//The Vowel Counter: You need to create a function that counts the number of vowels in a given string. Consider both uppercase and lowercase vowels.
let string ="This is a really big sentences which consistes of many vowels and consonents from english language";
console.log(string);
let array_of_characters_of_sentences=Array.from(string),no_of_vowels=0,no_of_spaces=0;
for (const a of array_of_characters_of_sentences) {
    let ascii=a.charCodeAt(0);
    if(ascii==65||ascii==69||ascii==73||ascii==79||ascii==85||ascii==97||ascii==101||ascii==106||ascii==111||ascii==117){
        no_of_vowels++;
    }
    if(ascii==32){
        no_of_spaces++;
    }
}
console.log("There are ",no_of_vowels," vowels, ",(string.length-no_of_vowels-no_of_vowels)," consonents and ",no_of_spaces," spaces")
