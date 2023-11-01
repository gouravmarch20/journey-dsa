/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function (haystack, needle) {
  const res = haystack.indexOf(needle)
  if (res == -1) {
    return -1
  }
  return res
}
