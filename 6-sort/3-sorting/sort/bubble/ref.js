const arr = [3, 2, 5, 1, -9];
const bubbleSort = (arr) => {
  let swapped;
  do {
    for (let i = 0; i < arr.length; i++) {
      if (arr[i] > arr[i + 1]) {
        let temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        console.log("arr");

        swapped = true;
      }
    }
    console.log(arr);
  } while (swapped);
};
bubbleSort(arr);
console.log("arr");
