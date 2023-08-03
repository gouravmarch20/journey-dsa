const maxElemItem = (arr, n) => {
  if (n === 1) return arr[0]
  return Math.max(maxElemItem(arr, n - 1), arr[n - 1])
}
const arr = [4, 8, 3, 1]
const n = arr.length

console.log(maxElemItem(arr, n))
