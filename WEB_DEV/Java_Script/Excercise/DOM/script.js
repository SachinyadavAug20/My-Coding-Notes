let box1=document.getElementsByTagName("div")[1];
let box2=box1.nextElementSibling;
let box3=box2.nextElementSibling;
let box4=box3.nextElementSibling;
let box5=box4.nextElementSibling;
let colorCollection={
    1:"#FFB6C1",
    2:"#87CEFA",
    3:"#90EE90",
    4:"#FFFFE0",
    5:"#E6E6FA"
}
let backgroundColorCollection={
    1:"#8B0000",
    2:"#006400",
    3:"#00008B",
    4:"#4B0082",
    5:"#013220"
}
let Rand=Math.floor((Math.random()*2))//choice
let Rand1=Math.floor((Math.random()*5)+1)
let Rand2=Math.floor((Math.random()*5)+1)
let Rand3=Math.floor((Math.random()*5)+1)
let Rand4=Math.floor((Math.random()*5)+1)
let Rand5=Math.floor((Math.random()*5)+1)
// console.log(Rand1,Rand2,Rand3);
//selection
if(Rand==1){
    box1.style.background=backgroundColorCollection[Rand1];
    box2.style.background=backgroundColorCollection[Rand2];
    box3.style.background=backgroundColorCollection[Rand3];
    box4.style.background=backgroundColorCollection[Rand4];
    box5.style.background=backgroundColorCollection[Rand5];

    box1.style.color=colorCollection[Rand1];
    box2.style.color=colorCollection[Rand2];
    box3.style.color=colorCollection[Rand3];
    box4.style.color=colorCollection[Rand4];
    box5.style.color=colorCollection[Rand5];
}
else if(Rand==0){
    box1.style.background=colorCollection[Rand1];
    box2.style.background=colorCollection[Rand2];
    box3.style.background=colorCollection[Rand3];
    box4.style.background=colorCollection[Rand4];
    box5.style.background=colorCollection[Rand5];
    
    box1.style.color=backgroundColorCollection[Rand1];
    box2.style.color=backgroundColorCollection[Rand2];
    box3.style.color=backgroundColorCollection[Rand3];
    box4.style.color=backgroundColorCollection[Rand4];
    box5.style.color=backgroundColorCollection[Rand5];
}
