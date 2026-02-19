console.log("hello js");
let boxes=document.querySelectorAll(".box");
console.log(boxes);
Array.from(boxes).forEach((e)=>{
    console.log(e);    
})
function getrandomcolor(){
    //plan 3 random color from 1 to 255
    let rand1=Math.floor((Math.random()*255)+1)
    let rand2=Math.floor((Math.random()*255)+1)
    let rand3=Math.floor((Math.random()*255)+1)
    // return "rgb("+rand1+"," +rand2+","+ rand3+")";
    return `rgb(${rand1}, ${rand2}, ${rand3})`
}
console.log(getrandomcolor());
// boxes[0].style.backgroundColor=getrandomcolor();
// boxes[0].style.color=getrandomcolor();

// boxes[1].style.backgroundColor=getrandomcolor();
// boxes[1].style.color=getrandomcolor();

// boxes[2].style.backgroundColor=getrandomcolor();
// boxes[2].style.color=getrandomcolor();

// boxes[3].style.backgroundColor=getrandomcolor();
// boxes[3].style.color=getrandomcolor();

// boxes[4].style.backgroundColor=getrandomcolor();
// OR
    Array.from(boxes).forEach((e)=>{
        e.style.backgroundColor=getrandomcolor();
        e.style.color=getrandomcolor();
        
})
