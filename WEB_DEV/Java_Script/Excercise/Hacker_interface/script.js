console.log("This is a hacker simulator not real");

let lines=["Initializing Hacking","Reading your Files","Excueting files","Ejecting virus","Grabing data from /user","Password files Detected","Sending all passwords and personal files to server","Cleaning up","Fetching out","Extracting Data","Actions in procedure","Stealing Data","Sending to data base"];
var num=0;
var rand= 0;
function addtext(){
    if(document.querySelectorAll(".dots").length>0){
        console.log(document.querySelector(".dots"));
        // document.querySelector("dots").sty;
        document.querySelectorAll(".dot")[num].style.animation="null";
        num++;
        document.querySelectorAll(".dot")[num].style.animation="null";
        num++;
        document.querySelectorAll(".dot")[num].style.animation="null";
        num++;
        
    }
    if(rand<lines.length){

        
        let html=` <div class="textbox">
        > ${lines[rand]}
        <span class="dots">
        <span class="dot1 dot">.</span>
        <span class="dot2 dot">.</span>
        <span class="dot3 dot">.</span>
        </span>
        </div>
        `;
        
        document.querySelector(".container").insertAdjacentHTML("beforeend",html);
    }
    else{
        // rand=0;
        return 0;
    }
    rand++;
}
let a =new Promise((resolve,reject)=>{

    document.querySelector(".btn").addEventListener("click",(e)=>{
        document.querySelector(".btn").hidden=true;
        resolve();
    })

})
a.then((e)=>{
    // addtext();
    var rand1= Math.floor((Math.random()*6)+1);
    setInterval(() => {
        rand1= Math.floor((Math.random()*6)+1);
        console.log(`${rand1}`);
        
        addtext();

    }, rand1*1000);
})
    
// addtext();
// addtext();
//need blinking ...
