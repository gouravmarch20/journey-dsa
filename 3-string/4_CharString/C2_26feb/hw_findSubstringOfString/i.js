const printSubstring = (s) => {
  for (let i = 0; i < s.length; i++) {
    for (let j = i; j < s.length; j++) {
      process.stdout.write(`${s.slice(i, j + 1)}- `  )
    }
    console.log(" ");
  }
}
const s = "noon"
printSubstring(s)
