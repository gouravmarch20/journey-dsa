/**
 * @param {string} s
 * @param {string} part
 * @return {string}
 */
var removeOccurrences = function (s, part) {
  while (1) {
    var fin = s.replace(part, "")
    if (fin == s) {
      return fin
    }
    s = fin
  }
}
const ans = "daabcbaabcbc"
const part = "abc"
console.log(removeOccurrences(ans, part))
