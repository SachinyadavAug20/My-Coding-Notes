console.log("hello dom");

document.querySelector(".box").textContent="Hello this was box";
document.querySelector(".box").setAttribute("style","font-weight: light");
document.designMode="on";
document.querySelector(".box").removeAttribute("Style");
