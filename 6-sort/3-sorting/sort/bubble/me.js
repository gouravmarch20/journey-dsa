const arr = [3, 2, 5, 1, -9];
const bubbleSort = (arr) => {
  for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr.length; j++) {
      if (arr[j] > arr[j + 1]) {
        const temp = arr[j + 1];
        arr[j + 1] = arr[i];
        arr[i] = temp;
      }
    }
  }
  console.log(arr);
};
bubbleSort(arr);
