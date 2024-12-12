function frequencySort(s) {
  // Step 1: Create a frequency map
  const freqMap = new Map();
  for (const char of s) {
    freqMap.set(char, (freqMap.get(char) || 0) + 1);
  }

  // Step 2: Convert map to an array of [char, frequency] pairs
  const freqArray = Array.from(freqMap);

  // Step 3: Sort the array based on frequency and lexicographical order
  freqArray.sort((a, b) => {
    if (b[1] > a[1]) {
      return 1; // `b` should come before `a` if frequency of `b` is higher
    } else if (b[1] < a[1]) {
      return -1; // `a` should come before `b` if frequency of `a` is higher
    } else {
      // If frequencies are equal, compare characters lexicographically
      if (a[0] > b[0]) {
        return 1; // `b` should come before `a` if character `a[0]` is lexicographically greater
      } else if (a[0] < b[0]) {
        return -1; // `a` should come before `b` if character `a[0]` is lexicographically smaller
      } else {
        return 0; // Characters are equal
      }
    }
  });
  

  // Step 4: Collect characters based on sorted frequency
  const result = [];
  for (const [char, freq] of freqArray) {
    result.push(char);
  }

  return result;
}

// Example usage
const input = "aabbccc";
console.log(frequencySort(input)); // Output: ['a', 'b', 'c']
