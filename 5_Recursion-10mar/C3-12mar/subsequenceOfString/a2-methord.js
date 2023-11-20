function printSubString(s, output, i) {
  if (i >= s.length) {
    console.log(output)
    return
  }
  // include 
  output = output + s[i]
  printSubString(s, output, i + 1)
  //exclude
  output = output.slice(0, output.length - 1)//? slice exclude the 2arg index
  printSubString(s, output, i + 1)
}

const s = "abc"
let output = ""
let i = 0
printSubString(s, output, i)
