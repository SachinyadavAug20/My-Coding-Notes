console.log("hello events");
let button=document.getElementById("btn");
button.addEventListener("dblclick",()=>{
    document.querySelector(".box").innerHTML="u doubl clicked"
})
button.addEventListener("click",()=>{
    document.querySelector(".box").innerHTML="Button is <b>clicked</b>";
    document.querySelectorAll(".box")[1].innerHTML="happy";
    alert("i was clicked");
})
button.addEventListener("contextmenu",()=>{
    document.querySelectorAll(".box")[0].innerHTML="Home";
    document.querySelectorAll(".box")[1].innerHTML="Contact";
    document.querySelectorAll(".box")[2].innerHTML="Service";
})
document.addEventListener("keyup",(e)=>{
    console.log(e);
    console.log(e.key);
})

document.addEventListener("keydown",(e)=>{
    console.log(e);
    console.log(e.key);
})

