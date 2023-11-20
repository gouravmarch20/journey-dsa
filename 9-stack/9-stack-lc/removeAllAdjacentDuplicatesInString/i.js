/**
 * @param {string} s
 * @return {string}
 */
var removeDuplicates = function (s) {
  let ans = ""
  for (let i = 0; i < s.length; i++) {
    if (ans.length > 0 && ans[ans.length - 1] === s[i]) {
      //  ans.slice(0, ans.length - 1)
      ans = ans.slice(0, -1)
    } else {
      ans += s[i]
    }
  }
  return ans
}
const s = "abbaca"

console.log(removeDuplicates(s))
// console.log(s.slice(s, -1))
