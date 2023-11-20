let arr = [2, 4, 1, 6, 9, 9, 9, 9, 9, 9]
const partition = (arr, s, e) => {
  const pivotValue = arr[s] // Pivot value
  let count = 0 //less than pivotValue counter
  for (let i = s + 1; i <= e; i++) {
    if (arr[i] <= pivotValue) {
      count++
    }
  }
  //place pivotValue at right
  let pivotIndex = s + count
  ;[arr[s], arr[pivotIndex]] = [arr[pivotIndex], arr[s]]

  // left and right sort
  let i = s
  let j = e
  while (i < pivotIndex && j > pivotIndex) {
    while (arr[i] <= pivotValue) {
      i++
    }
    while (arr[j] > pivotValue) {
      j--
    }
    if (i < pivotIndex && j > pivotIndex) {
      ;[arr[i++], arr[j--]] = [arr[j], arr[i]]
    }
  }
  return pivotIndex
}
const qs = (arr, s, e) => {
  if (s >= e) {
    return
  }
  //partition
  let p = partition(arr, s, e)
  //left sort
  qs(arr, s, p - 1)
  // right
  qs(arr, p + 1, e)
}
qs(arr, 0, arr.length - 1)
console.log(arr)
