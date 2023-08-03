function printSubString(s, output, i) {
  if (i >= s.length) {
    console.log(output)
    return
  }
  //exclude
  printSubString(s, output, i + 1)
  // include
  output = output + s[i]
  printSubString(s, output, i + 1)
}

const s = "abc"
let output = ""
let i = 0
printSubString(s, output, i)
