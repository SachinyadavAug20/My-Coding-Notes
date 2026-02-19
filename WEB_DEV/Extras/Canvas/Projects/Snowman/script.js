e = document.getElementById("can")
const ctx = e.getContext('2d')
let centerX = 240, minX = 222, Xrange = 33;
let centerY = 200, minY = 210, Yrange = 33;
let p = 0, factor = 1;
e.addEventListener("mousemove", function(info) {
    p = info.offsetX / e.width;
})

const BowTieImage = new Image()
BowTieImage.src = "tie.png"
const song = new Audio("song.mp3")

document.addEventListener("keydown", function(info) {
    if (info.code == "Space") {
        song.currentTime = 0;
        song.play()
    }
})

function animate() {
    // p += 0.01*factor;
    let x = minX + Xrange * p;
    // let y = minY + Yrange * Math.sin(p*Math.PI);
    // if (p > 1 || p < 0) {
    //     factor = factor * -1
    // }

    ctx.clearRect(0, 0, can.width, can.height)
    drawsnowman(200, 620, 135, 0.7);
    ctx.beginPath()
    const x2 = x - 30 * 2;
    ctx.arc(x, 200, 15, 0, Math.PI * 2)
    ctx.arc(x2, 200, 15, 0, Math.PI * 2)
    ctx.fill()
    ctx.drawImage(BowTieImage, 134, 260, 125, 70)
    ctx.font = '25px Comic Sans MS'
    ctx.fillStyle = 'red'
    ctx.textAlign = 'center'
    ctx.textBaseline = 'middle'
    ctx.fillText("Merry New year", 200, 370)
    ctx.fillStyle = 'black'
    ctx.font = '25px cursive'
    ctx.fillText("Press space", 200, 340)
    requestAnimationFrame(animate);
}
animate()
