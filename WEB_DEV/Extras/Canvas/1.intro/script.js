let e = document.querySelector(".canvas");
const cntx = e.getContext('2d'); // it has every thing to draw on canvas

cntx.beginPath()
cntx.moveTo(100, 300);
cntx.lineTo(300, 300);
cntx.lineTo(300, 100)
cntx.lineTo(100, 100)
cntx.lineTo(100, 300)
cntx.lineTo(300, 100)
cntx.lineTo(100, 100)
cntx.lineTo(300, 300)
cntx.stroke();

cntx.beginPath()
cntx.arc(200, 200, 150, 0, 7)  // center cords,radius
cntx.stroke();
cntx.beginPath()
cntx.arc(200, 200, 170, 0, 3.14159)  // center cords,radius,,arc length
cntx.stroke();
cntx.beginPath()
cntx.arc(200, 200, 180, 3, 2 * Math.PI)  // center cords,radius,start arch lenth,arc length
cntx.stroke()


let e2 = document.querySelector(".canvas2");
const cntx2 = e2.getContext('2d'); // it has every thing to draw on canvas

cntx2.beginPath()
cntx2.rect(150, 150, 100, 100) // cords of top left corner ,width, height
cntx2.stroke()

let e3 = document.querySelector(".canvas3");
const cntx3 = e3.getContext('2d'); // it has every thing to draw on canvas

cntx3.beginPath()
cntx3.rect(100, 100, 200, 200)
cntx3.lineWidth = 30;
cntx3.strokeStyle = 'cyan'
cntx3.fillStyle = 'rgb(7,226,42)'
cntx3.fill()
cntx3.stroke()


let e4 = document.querySelector(".canvas4");
const cntx4 = e4.getContext('2d'); // it has every thing to draw on canvas
const thickness = 10;
let N = 10, x = 0, y = 0, w = 400, h = 400, i = 1;
let color = ['white', 'blue']

while (N--) {
    cntx4.beginPath()
    cntx4.rect(x, y, w, h)
    cntx4.fillStyle = color[i]
    cntx4.fill()
    // cntx4.stroke()
    x = x + thickness;
    y = y + thickness;
    w = w - thickness - thickness;
    h = h - thickness - thickness;
    if (i == 0) {
        i = 1
    }
    else {
        i = 0
    }
}

