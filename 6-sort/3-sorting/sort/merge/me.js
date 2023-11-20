const arr = [3, 2, 5, 1, -9];
const mergeSort = (arr) => {
  if (arr.length < 2) {
    return arr;
  }
  const mid = Math.floor(arr.length / 2);
  const leftArray = arr.slice(0, mid);
  const rightArray = arr.slice(mid);
  return merge(mergeSort(leftArray), mergeSort(rightArray));
};
const merge = (leftArray, rightArray) => {
  const sortedArr = [];
  while (leftArray.length && rightArray.length) {
    if (leftArray[0] <= rightArray[0]) {
      sortedArr.push(leftArray.shift());
    } else {
      sortedArr.push(rightArray.shift());
    }
  }
  return [...sortedArr, ...leftArray, ...rightArray];
};
console.log(mergeSort(arr));
