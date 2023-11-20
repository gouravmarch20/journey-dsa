const subsequenceOfString = (str) => {
  // function body
  const n = str.length
  let ans = []

  for (let num = 0; num < Math.pow(2, n); num++) {
    let temp = ""
    for (let j = 0; j < n; j++) {
      const ch = str[j]
    //   console.log(num & (1 << j))//^ even one bit match --> true value --> if case run ==> means that is present in number
      if (num & (1 << j)) {
        temp += ch
      }
    }
    ans.push(temp)
  }

  //   return ans.sort()
}
console.log(subsequenceOfString("abc"))
