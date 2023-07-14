const isArraySorted = (arr, n, i) => {
  // function body
  if (i == n) {
    // console.log("kk")
    return true
  }
  console.log(arr[i+1])
  if (arr[i] > arr[i + 1]) {
    return false
  }
  return isArraySorted(arr, n, i + 1)
}
const arr = [2, 8, 111]

console.log(isArraySorted(arr, arr.length, 0))
