/* Create a business Shop_name generator by combining list of adjectives and shop Shop_name and another word

Adjectives:
Crazy 
Amazing
Fire 

Shop Shop_name:
Engine
Foods
Garments

Another Word:
Bros
Limited
Hub

*/
let adjective = {
    1: "Crazy",
    2: "Amazing",
    3: "Fire"
}
let Shop_name = {
    1: "Engine",
    2: "Foods",
    3: "Garments"
}
let word = {
    1: "Bros",
    2: "Limited",
    3: "Hub"
}
let rand1=((Math.random()*10)/3)+1;
let rand2=((Math.random()*10)/3)+1;
let rand3=((Math.random()*10)/3)+1;

console.log(`${adjecstive[rand1]} ${Shop_name[rand2]} ${word[rand3]}}`);
