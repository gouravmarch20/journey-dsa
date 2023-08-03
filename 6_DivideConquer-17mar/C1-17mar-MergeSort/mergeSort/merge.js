const arr = [3, 1, 2]
const merge = (arr, s, e) => {
  console.log("yu")
  let m = Math.floor((s + e) / 2)
  // creating 2 array , length of both array are
  let len1 = m - s + 1 //  index start with 0 so + 1
  let len2 = e - m
  //
  let left = []
  let right = []
  let mainArrayIndex = s
  //
  for (let i = 0; i < len1; i++) {
    left[i] = arr[mainArrayIndex++]
  }
  mainArrayIndex = m + 1

  for (let i = 0; i < len2; i++) {
    right[i] = arr[mainArrayIndex++]
  }

  //merge 2 array into sort way
  let leftIndex1 = 0
  let rightIndex = 0
  mainArrayIndex = s
  while (leftIndex1 < len1 && rightIndex < len2) {
    if (left[leftIndex1] < right[rightIndex]) {
      arr[mainArrayIndex++] = left[leftIndex1++]
    } else {
      arr[mainArrayIndex++] = right[rightIndex++]
    }
  }
  //   copy logic for left array
  while (leftIndex1 < len1) {
    arr[mainArrayIndex++] = left[leftIndex1++]
  }
  //   copy logic for right array

  while (rightIndex < len2) {
    arr[mainArrayIndex++] = right[rightIndex++]
  }
}
const mergeSort = (arr, s, e) => {
  if (s >= e) {
    return
  }
  let m = Math.floor((s + e) / 2)

  //left
  mergeSort(arr, s, m)
  //right
  mergeSort(arr, m + 1, e) //m1 : iterate till end
  //merge
  merge(arr, s, e)
  //
  // console.log(arr)
}
mergeSort(arr, 0, arr.length - 1)
console.log(arr)
