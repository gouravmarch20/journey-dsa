/**
 * @param {string} s
 * @return {number}
 */
var secondHighest = function (s) {
  let maxiFirst = Number.NEGATIVE_INFINITY
  let maxiSecond = Number.NEGATIVE_INFINITY

  for (const val of s) {
    // M1 miss equal to sign
    if (val >= 0 && val <= 9) {
      console.log(val)
      //^L1 what if first number is largest

      if (maxiFirst < val) {
        maxiSecond = maxiFirst
        maxiFirst = val
      }
      //^L2: what if only 1 digit present & same digit --> 4 time in a string
      //? maxiFirst != val
      else if (maxiFirst != val && maxiSecond < val) {
        maxiSecond = val
      }
    }
  }
  if (maxiSecond === Number.NEGATIVE_INFINITY) {
    return -1
  }
  return maxiSecond
}

const s = "sjhtz8344"
console.log(secondHighest(s))
