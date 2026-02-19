console.log("hello ID and class seclector");
let boxes=document.getElementsByClassName("box");

console.log(boxes);
boxes[1].style.backgroundColor="red";
let redbox = document.getElementById("redbox");
redbox.style.backgroundColor="red";

document.querySelector(".box").style.backgroundColor="yellow";//selects the first element of class box

console.log(document.querySelectorAll(".box"));//gives node list
document.querySelectorAll(".box")[3].style.backgroundColor="lime";
//iterate over this list
for(let i=0;i<document.querySelectorAll(".can").length;i++){
    document.querySelectorAll(".can")[i].style.backgroundColor="peru";

}
//OR way
document.querySelectorAll(".can").forEach((e)=>{
    // console.log(e);
    e.style.backgroundColor="purple";
})

document.getElementsByTagName("h1")[0].style.backgroundColor="blue";
document.getElementsByTagName("div")[0].style.backgroundColor="#54ebe1";
document.getElementsByTagName("div")[6].style.backgroundColor="pink";

//matches
let e=document.getElementsByTagName("div");
console.log(e[3].matches("#redbox"));//looks for selector in the element
console.log(e[2].matches("#redbox"));//looks for selector in the element

//closest
console.log(e[2].closest(".container"));//targets closest ancestor which has this selector
e[2].closest(".container").style.border="2px solid black";
e[7].closest(".container").style.border="2px solid black";
console.log(e[2].closest("body").style.border="2px solid black");//targets closest ancestor which has this selector
console.log(e[2].closest("lol"));//targets closest ancestor which has this selector

//contains
console.log(document.querySelector(".container").contains(e[1]));//contains box 1
console.log(document.querySelector(".container").contains(e[0]));//contains itself
console.log(document.querySelector(".container").contains(e[7]));//doesnt contains can
console.log(document.querySelector(".container").contains(document.querySelector("body")));//container does not contains body
console.log(document.querySelector("body").contains(document.querySelector(".container")));//body contains container
 