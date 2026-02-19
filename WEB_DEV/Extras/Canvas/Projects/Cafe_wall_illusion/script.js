e = document.getElementById("can")
ctx = e.getContext('2d')

function makeChessBoard() {
    for (let i = 0; i <= e.width; i += 100) {
        for (let j = 0; j <= e.height; j += 100) {
            ctx.beginPath()
            ctx.rect(i, j, 50, 50)
            ctx.strokeStyle = 'gray'
            ctx.lineStyle = 'white'
            ctx.lineWidth = 2
            ctx.fill()
            ctx.stroke()

        }
    }

    for (let i = 50; i <= e.width; i += 100) {
        for (let j = 50; j <= e.height; j += 100) {
            ctx.beginPath()
            ctx.rect(i, j, 50, 50)
            ctx.strokeStyle = 'gray'
            ctx.lineStyle = 'white'
            ctx.lineWidth = 2
            ctx.fill()
            ctx.stroke()

        }
    }
}


ctx.strokeStyle = 'gray'
ctx.fillStyle = 'white'
ctx.lineWidth = 2

function drawSquare(x, y, size) {
    ctx.beginPath()
    ctx.rect(x, y, size, size)
    ctx.fill()
    ctx.stroke()
}
let size = 50
let offset = 0
for (let y = 0; y <= e.height; y += size) {
    for (let x = 0; x <= e.width; x += size) {
        if ((x / size) % 2 == 0) {
            ctx.fillStyle = 'black'
        }
        else {
            ctx.fillStyle = 'white'
        }
        drawSquare(x - offset, y, size)
    }
    offset = size / 2 - offset;
}

// Change color so illusion gone
e1 = document.getElementById("can1")
const ctx1 = e1.getContext('2d')

ctx1.strokeStyle = 'gray'
ctx1.fillStyle = 'white'
ctx1.lineWidth = 2

function drawSquare1(x, y, size) {
    ctx1.beginPath()
    ctx1.rect(x, y, size, size)
    ctx1.fill()
    ctx1.stroke()
}
size = 50
offset = 0
for (let y = 0; y <= e.height; y += size) {
    for (let x = 0; x <= e.width; x += size) {
        if ((x / size) % 2 == 0) {
            ctx1.fillStyle = 'cyan'
        }
        else {
            ctx1.fillStyle = 'white'
        }
        drawSquare1(x - offset, y, size)
    }
    offset = size / 2 - offset;
}



e2 = document.getElementById("Yin")
const yin = e2.getContext('2d')
yin.beginPath()
yin.rect(0, 0, 200, 400)
yin.fillStyle = 'black'
yin.fill()

yin.beginPath()
yin.arc(e2.width / 2, e2.height / 2, Math.min(e2.width / 2, e2.height / 2), 0, 2 * Math.PI)
yin.strokeStyle = 'black'
yin.lineWidth = 2
yin.stroke()

yin.beginPath()
yin.arc(e2.width / 2, e2.height / 2, Math.min(e2.width / 2, e2.height / 2), 0.5 * Math.PI, 3 * Math.PI / 2)
yin.strokeStyle = 'white'
yin.lineWidth = 2
yin.stroke()

yin.beginPath()
yin.arc(200, 100, 100, 0, 2 * Math.PI)
yin.fillStyle = 'white'
yin.fill()

yin.beginPath()
yin.arc(200, 100, 30, 0, 2 * Math.PI)
yin.fillStyle = 'black'
yin.fill()


yin.beginPath()
yin.arc(200, 300, 100, 0, 2 * Math.PI)
yin.fillStyle = 'black'
yin.fill()

yin.beginPath()
yin.arc(200, 300, 30, 0, 2 * Math.PI)
yin.fillStyle = 'white'
yin.fill()



e = document.getElementById('Ebb')
ebb = e.getContext('2d')
const Radius = 50
const biggerRadius = 60
const smallerRadius = 30
let centerX = e.width / 2+175, centerY = e.height / 2+175

ebb.beginPath()
ebb.arc(centerX, centerY, Radius, 0, 2 * Math.PI)
ebb.fill()
ebb.fillStyle = 'yellow'


ebb.beginPath()
ebb.arc(centerX + 0 * (Radius + 50), centerY + (Radius + 50), smallerRadius, 0, 2 * Math.PI)
ebb.fill()
ebb.stroke()
ebb.beginPath()
ebb.arc(centerX + (Radius + 50), centerY + 0 * (Radius + 50), smallerRadius, 0, 2 * Math.PI)
ebb.fill()
ebb.stroke()
ebb.beginPath()
ebb.arc(centerX + 0 * (Radius + 50), centerY - (Radius + 50), smallerRadius, 0, 2 * Math.PI)
ebb.fill()
ebb.stroke()
ebb.beginPath()
ebb.arc(centerX - (Radius + 50), centerY + 0 * (Radius + 50), smallerRadius, 0, 2 * Math.PI)
ebb.fill()
ebb.stroke()
ebb.beginPath()
ebb.arc(centerX - (Radius + 24.7487), centerY - (Radius + 24.7487), smallerRadius, 0, 2 * Math.PI)
ebb.fill()
ebb.stroke()
ebb.beginPath()
ebb.arc(centerX + (Radius + 24.7487), centerY - (Radius + 24.7487), smallerRadius, 0, 2 * Math.PI)
ebb.fill()
ebb.stroke()
ebb.beginPath()
ebb.arc(centerX - (Radius + 24.7487), centerY + (Radius + 24.7487), smallerRadius, 0, 2 * Math.PI)
ebb.fill()
ebb.stroke()
ebb.beginPath()
ebb.arc(centerX + (Radius + 24.7487), centerY + (Radius + 24.7487), smallerRadius, 0, 2 * Math.PI)
ebb.fill()
ebb.stroke()


centerX = e.width / 2-110, centerY = e.height / 2-110

ebb.beginPath()
ebb.arc(centerX, centerY, Radius, 0, 2 * Math.PI)
ebb.fillStyle='black'
ebb.fill()
ebb.fillStyle = 'yellow'


ebb.beginPath()
ebb.arc(centerX + 0 * (Radius + 125), centerY + (Radius + 125), biggerRadius, 0, 2 * Math.PI)
ebb.fill()
ebb.stroke()
ebb.beginPath()
ebb.arc(centerX + (Radius + 125), centerY + 0 * (Radius + 125), biggerRadius, 0, 2 * Math.PI)
ebb.fill()
ebb.stroke()
ebb.beginPath()
ebb.arc(centerX + 0 * (Radius + 125), centerY - (Radius + 125), biggerRadius, 0, 2 * Math.PI)
ebb.fill()
ebb.stroke()
ebb.beginPath()
ebb.arc(centerX - (Radius + 125), centerY + 0 * (Radius + 125), biggerRadius, 0, 2 * Math.PI)
ebb.fill()
ebb.stroke()
ebb.beginPath()
ebb.arc(centerX - (Radius + 70), centerY - (Radius + 70), biggerRadius, 0, 2 * Math.PI)
ebb.fill()
ebb.stroke()
ebb.beginPath()
ebb.arc(centerX + (Radius + 70), centerY - (Radius + 70), biggerRadius, 0, 2 * Math.PI)
ebb.fill()
ebb.stroke()
ebb.beginPath()
ebb.arc(centerX - (Radius + 70), centerY + (Radius + 70), biggerRadius, 0, 2 * Math.PI)
ebb.fill()
ebb.stroke()
ebb.beginPath()
ebb.arc(centerX + (Radius + 70), centerY + (Radius + 70), biggerRadius, 0, 2 * Math.PI)
ebb.fill()
ebb.stroke()

