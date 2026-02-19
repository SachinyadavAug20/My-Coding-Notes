/* Create a business name generator by combining list of adjectives and shop name and another word

Adjectives:
Crazy 
Amazing
Fire 

Shop Name:
Engine
Foods
Garments

Another Word:
Bros
Limited
Hub

*/
for(let i=0;i<10;i++){

    
    
let random=Math.random()*10;//this gives random number btw 0.001 to 9
// console.log(random);
let no_of_word=3;//given
let divide=9/no_of_word;
let company_name="";
//lets choice adjective
if(random<divide){
    company_name+="Crazy";
}
else if(random>=divide && random<2*divide){
    company_name+="Amazing";
}
else if(random>=2*divide){
    company_name+="Fire";
}

company_name+=" ";//provide a space
random=Math.random()*10;//this gives random number btw 0.001 to 9 RESET NUMBER SO, PAIRING NOT HAPPENS
// console.log(random);
if(random<divide){
    company_name+="Engine";
}
else if(random>=divide && random<2*divide){
    company_name+="Foods";
}
else if(random>=2*divide){
    company_name+="Garments";
}

company_name+=" ";//provide a space
random=Math.random()*10;//this gives random number btw 0.001 to 9 RESET NUMBER SO, PAIRING NOT HAPPENS
// console.log(random);
if(random<divide){
    company_name+="Bros";
}
else if(random>=divide && random<2*divide){
    company_name+="Limited";
}
else if(random>=2*divide){
    company_name+="Hub";
}
console.log("Generated company name is :",company_name);

}

