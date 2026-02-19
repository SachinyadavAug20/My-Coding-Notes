console.log("hello DOM");
container = document.body.childNodes[3];

document.body.childNodes[1].style.backgroundColor="red";
document.body.childNodes[3].childNodes[1].style.backgroundColor="peru";
document.body.childNodes[3].childNodes[3].style.backgroundColor="Blue";
document.body.childNodes[3].childNodes[5].style.backgroundColor="green";
document.body.childNodes[3].childNodes[7].style.backgroundColor="yellow";
document.body.childNodes[3].childNodes[9].style.backgroundColor="aqua";

container.style.backgroundColor="wheat";

box1 =document.body.childNodes[3].childNodes[1];
box2=box1.nextElementSibling;
box3=box2.nextElementSibling;
box4=box3.nextElementSibling;
box5=box4.nextElementSibling;

box1.style.color="white"
box2.style.color="red"
box3.style.color="yellow"
box4.style.color="blue"
box5.style.color="red"

//table styling
//table is next element sibling of 
table=container.nextElementSibling;
table.style.backgroundColor="aqua";
table.rows[0].style.backgroundColor="red";
table.rows[2].style.backgroundColor="blue";
table.rows[2].style.color="white";
table.caption.style.backgroundColor="peru";
