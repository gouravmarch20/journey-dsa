const revString = (str, i, n) => {
  //
  if (i === n) {
    return ""
  }
  let output = revString(str , i+1 , n)
  output = output + str[i]
  return output
}

const str = "abc"
const i = 0
const n = str.length 
console.log(revString(str, i, n))
