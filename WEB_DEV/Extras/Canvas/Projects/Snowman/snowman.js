e=document.getElementById('can')
cnt1=e.getContext('2d')

function drawsnowman(x1, y1, r1, scale) {
    // x1,y1,z1 are properties of bottom circle of snowman
    cnt1.beginPath()
    cnt1.rect(0,0,400,400)
    cnt1.fillStyle='#18b3fb'
    cnt1.fill()

    cnt1.beginPath()
    cnt1.arc(x1, y1, r1, 0, Math.PI * 2)
    cnt1.lineWidth = border_radius
    cnt1.fillStyle = 'white'
    cnt1.fill()
    cnt1.stroke()

    //Snowman body
    let r2 = scale * r1, x2 = x1, y2 = y1 - r1 - r2;
    cnt1.beginPath()
    cnt1.arc(x2, y2, r2, 0, Math.PI * 2)
    cnt1.fill() // not to give fill style again as it stays the same
    cnt1.stroke()

    // snowman head
    let r3 = (scale - 0.1) * r1, x3 = x1, y3 = y2 - r2 - r3
    cnt1.beginPath()
    cnt1.arc(x3, y3, r3, 0, Math.PI * 2)
    cnt1.fill()
    cnt1.stroke()

    drawHat(x3, y3, r3);
}

function drawHat(xhead, yhead, rhead) {
    let w1 = rhead * 2, h1 = rhead / 2, x4 = xhead - w1 / 2, y4 = yhead - rhead - h1 * 0.4
    cnt1.beginPath()
    cnt1.rect(x4, y4, w1, h1)
    cnt1.fillStyle = 'black'
    cnt1.fill()
    cnt1.stroke()
    let w2 = w1 * 0.8, h2 = rhead, x5 = xhead - w2 / 2, y5 = y4 - h2;
    cnt1.beginPath()
    cnt1.rect(x5, y5, w2, h2)
    cnt1.fill()
    cnt1.stroke()
}
let r1 = 60, x1 = 200, y1 = 400 - r1, border_radius = 0.3, scale = 0.7;
function make_a_snowman() {
    drawsnowman(x1, y1, r1, scale);
}
// make_a_snowman()
