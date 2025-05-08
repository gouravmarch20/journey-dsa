function printPermutation(strArr, i) {
  // Base case: if the pointer has reached the end, print the permutation
  if (i >= strArr.length) {
    console.log(strArr.join(""));
    return;
  }

  for (let j = i; j < strArr.length; j++) {
    // Swap characters at positions i and j
    [strArr[i], strArr[j]] = [strArr[j], strArr[i]];

    // Recursive call for the next index
    printPermutation(strArr, i + 1);

    // Backtrack: swap back to restore original order
    [strArr[i], strArr[j]] = [strArr[j], strArr[i]];
  }
}

// Equivalent of main function
const str = "abc";
const strArr = str.split(""); // Convert string to array for easy swapping
printPermutation(strArr, 0);
