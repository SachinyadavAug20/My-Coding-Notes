// Mouse interaction eventlisterner
let e1 = document.querySelector(".canvas");
const cnt1 = e1.getContext('2d');

const Minradius = 10, rangeRadius = 50
let p = 0, sign = 1
let X = 200, Y = 200

e1.addEventListener("mousemove", function SI(info) {
    X = info.offsetX;
    Y = info.offsetY;

});


    animate()
function animate() {

    const r = Minradius + rangeRadius * Math.sin(p * Math.PI)
    p += 0.02 * sign
    if (p > 1 || p < 0) {
        sign = -1 * sign
    }

    cnt1.clearRect(0, 0, 400, 400)

    cnt1.beginPath()
    cnt1.rect(0, 0, 400, 400)
    cnt1.fillStyle = 'lime'
    cnt1.fill()
    cnt1.stroke()

    // cnt1.beginPath();
    // cnt1.lineWidth = 5;
    // cnt1.strokeStyle = 'blue'
    // cnt1.arc(x - 7, y - 125, 10, 0, Math.PI * 2);
    // cnt1.stroke();

    cnt1.beginPath();
    cnt1.strokeStyle = 'red'
    cnt1.lineWidth = 6;
    cnt1.arc(X, Y, r, 0, Math.PI * 2);
    cnt1.stroke();
    requestAnimationFrame(animate)
}
e1.addEventListener("mouseleave", () => {
    cnt1.clearRect(0, 0, 400, 400)
    cnt1.beginPath()
    cnt1.rect(0, 0, 400, 400)
    cnt1.fillStyle = 'brown'
    cnt1.fill()
    cnt1.stroke()
})

