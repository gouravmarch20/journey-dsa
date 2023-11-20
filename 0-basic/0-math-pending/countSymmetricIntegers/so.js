/**
 * @param {number} low
 * @param {number} high
 * @return {number}
 */
var countSymmetricIntegers = function(low, high) {
    let count = 0
    // loop from lower bound to upper bound, adding 1, when a number is symmetric
    for(let i = low; i <= high; i++) {
      s = i.toString() // turn i into a string
      if (i < 10) continue // if there is an uneven number of digits it cannot be symmetric, so we skip
      if (i < 100 && s[0] === s[1]) count++ // if digit 1 === digit 2, increase count
      if (i < 1000) continue // if there is an uneven number of digits it cannot be symmetric, so we skip
      if (Number(s[0]) + Number(s[1]) === Number(s[2]) + Number(s[3])) count++ // if the sum of the first 2 digits is the same as the last, add 1 to count
    }
    return count
  };