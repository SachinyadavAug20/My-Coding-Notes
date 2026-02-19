let color=prompt("Choice color");
if(color=="redirect"){
    redirector();
}
else{
document.body.style.backgroundColor=color;
}

function redirector(){
let count = prompt("Enter number(1,2,3,4)");
switch(count){
    case "1":location.href="https://google.com";
            break;    
    case "2":location.href="https://github.com";
            break;
    case "3":location.href="https://linkedin.com";
            break;
    case "4":location.href="https://youtube.com";
            break;
    default:location.href="https://codewithharry.com";
            break;
}
}

