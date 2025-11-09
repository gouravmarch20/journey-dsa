function mergeSort(arr) {
    // base case
    if (arr.length <= 1) return arr;
  
    // divide
    const mid = Math.floor(arr.length / 2);
    const left = arr.slice(0, mid);
    const right = arr.slice(mid);
  
    // conquer (recursively sort both halves)
    const sortedLeft = mergeSort(left);
    const sortedRight = mergeSort(right);
  
    // combine
    return merge(sortedLeft, sortedRight);
  }
  
  // helper to merge two sorted arrays
  function merge(left, right) {
    const result = [];
    let i = 0, j = 0;
  
    // pick smaller element from both
    while (i < left.length && j < right.length) {
      if (left[i] < right[j]) {
        result.push(left[i]);
        i++;
      } else {
        result.push(right[j]);
        j++;
      }
    }
  
    // add remaining elements
    while (i < left.length) result.push(left[i++]);
    while (j < right.length) result.push(right[j++]);
  
    return result;
  }
  
  // test
  console.log(mergeSort([5, 2, 4, 7, 1, 3, 2, 6]));
  