elemrnt = document.getElementById("Can")
cnt = elemrnt.getContext('2d')
cnt.beginPath()
cnt.rect(350, 350, 50, 50)
cnt.fillStyle = 'yellow'
cnt.fill()
cnt.stroke()

const heartImage = new Image();
heartImage.src = 'star.png'

let minY = 0, rangeY = 70, factor = 1, p = 0;
animate()
function animate() {
    cnt.clearRect(0, 0, elemrnt.width, elemrnt.height)

    p += 0.02
    y = minY + rangeY * Math.sin(p * Math.PI);

    if(p>1){
        p=0;
    }
    // heartImage.onload = function() {
    cnt.drawImage(heartImage, 75, y, 250, 200)  // (Image,XTopPos,YTopPos,width,height)
    // }

    cnt.fillStyle = 'red'
    cnt.font = '30px mono'   // size font-family
    cnt.textBaseLine = 'middle'; // Vertical fixed now vertical at pso
    cnt.textAlign = 'center'; //horizontal fix horixonta;lly at pos

    cnt.fillText("HTML Canvas", 200, 300)  // .fillText(text,Xpos,Ypos) it takes previous fillStyle by default

    requestAnimationFrame(animate);
}

