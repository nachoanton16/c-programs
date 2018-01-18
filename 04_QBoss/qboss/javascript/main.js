var Xw = 700
var Yw = 450
var lienzo

function  cambia(c) {
    return [ Xw + c[0], Yw - c[1] ]

}

function punto(p) {

    var centro = cambia([0, 0])
    var r = 25

     lienzo.beginPath()
     lienzo.arc(cerntro[0], centro[1], r-10, 0, 2 * Math.PI, false)
     lienzo.fillStyle = "#00CCCC"
     lienzo.fill()
     lienzo.arc(centro[0], centro[1], r, 0, 2 * Math.PI, false)
     lienzo.stroke()


}
function main() {
  lienzo = document.getElementById("cloth").getContext("2d")
  punto([0, 0])
  punto([10, 10])






}
