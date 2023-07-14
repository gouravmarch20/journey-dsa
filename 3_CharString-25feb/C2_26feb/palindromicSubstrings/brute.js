//* O(n^3)
const checkPalindrome = (s) => {
  let i = 0
  let j = s.length - 1

  while (i <= j) {
    if (s[i] != s[j]) {
      return false
    }
    i++
    j--
  }
  return true
}
const substring = (s) => {
  let c = 0
  for (let i = 0; i < s.length; i++) {
    for (let j = i; j < s.length; j++) {
      if (checkPalindrome(s.slice(i, j + 1))) {
        c++
      }
    }
  }
  return c

}
const s = substring("aaa")
