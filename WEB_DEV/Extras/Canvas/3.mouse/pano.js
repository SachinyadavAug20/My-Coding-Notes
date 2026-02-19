e = document.getElementById("Canvas")
cnt = e.getContext('2d')

const b6 = new Audio("b6.mp3")
const c6 = new Audio("c6.mp3")
const e6 = new Audio("e6.mp3")
const f6 = new Audio("f6.mp3")
const g6 = new Audio("g6.mp3")
const a6 = new Audio("a6.mp3")
const d6 = new Audio("d6.mp3")

document.addEventListener('keydown', function(info) {
    // It will works once but repeated it many times 
    // as it replays when old is finished
    console.log(info.code);
    if (info.code == "Delete") {
        b6.currentTime = 0; //reset it 
        b6.play();
    }
    else if (info.code == "Backspace") {
        b6.currentTime = 0; //reset it 
        c6.play();
    }
    else if (info.code == "Backslash") {
        b6.currentTime = 0; //reset it 
        e6.play();
    }
    else if (info.code == "Enter") {
        b6.currentTime = 0; //reset it 
        f6.play();
    }
    else if (info.code == "ShiftRight") {
        b6.currentTime = 0; //reset it 
        g6.play();
    }
    else if (info.code == "PageDown") {
        b6.currentTime = 0; //reset it 
        a6.play();
    }
    else if (info.code == "ArrowRight") {
        b6.currentTime = 0; //reset it 
        d6.play();
    }
})
