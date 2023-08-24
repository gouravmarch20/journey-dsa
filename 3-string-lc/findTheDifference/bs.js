var nextGreatestLetter = function (letters, target) {
  let s = 0
  const n = letters.length - 1
  let e = n //
  let m = Math.floor((s + e) / 2)
  let res = ""
  while (s < e) {
    if (letters[m] <= target) {
      s++
    } else if (letters[m] > target) {
      res = letters[m]
      e--
    }
    m = Math.floor((s + e) / 2)
  }
  // ~ not found case
  console.log(s, e , n)
  if (s === n) {
    // if (letters[s] <= target) {//M wrong logic thinking
    //   return letters[0]
    // } 
    if (letters[s] > target) {
      return letters[n]
    } else {
      return letters[0]
    }
  }
  return letters[e]
}

const letters = ["c", "f", "j"]
const target = "g"

const res = nextGreatestLetter(letters, target)
console.log(res)
