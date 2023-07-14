const maxElemItem = (arr, i, n, max) => {
  if (i >= n) {
    return max
  }
  if (max < arr[i]) {
    max = arr[i]
  }
  const badiProblemAns = maxElemItem(arr, ++i, n, max)//? each function return ans
  return badiProblemAns
}
const arr = [4, 8, 3, 1]
max = -1
console.log(maxElemItem(arr, 0, arr.length, max))
