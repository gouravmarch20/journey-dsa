//* O( n / 2) ==> O(n)
const isPalindrome = (str, i, j) => {
  // function body
  //! i greater than case miss ,
  if (i >= j) {
    return true
  }
  if (str[i] !== str[j]) {
    return false
  }

  return isPalindrome(str, i + 1, j - 1)
}

const str = "abcdjba"
const i = 0
const j = str.length - 1
console.log(isPalindrome(str, i, j))
