
// Given an integer array A of the size N. Find the sum of values in the array that has different parity from that of their index in the array.
// Calculate the sum of values of A[i] for all i where, A[2] mod 2 ‡ i mod 2
// Note: 1-based indexing is used.

// 922. Sort Array By Parity II
function sumDifferentParity(arr) {
    let sum = 0;
  
    for (let i = 1; i <= arr.length; i++) {
      const value = arr[i - 1]; // since arr is 0-based
      if ((value % 2) !== (i % 2)) {
        sum += value;
      }
    }
  
    return sum;
  }
  
  // Test cases
  console.log(sumDifferentParity([33, 43, 38])); // 81
  console.log(sumDifferentParity([2, 3, 4, 5])); // 14
  