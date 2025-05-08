function getPermutationsIterative(str) {
  if (str.length === 0) return [];

  // Start with an array that holds an empty string
  let permutations = [""];

  for (let char of str) {
    let newPermutations = [];

    // For each permutation we already have, insert the new character at every possible position
    for (let perm of permutations) {
      for (let i = 0; i <= perm.length; i++) {
        // Insert char at position i
        let newPerm = perm.slice(0, i) + char + perm.slice(i);
        newPermutations.push(newPerm);

        // Debug: Show how characters are inserted step by step
        console.log(
          `Inserting '${char}' into '${perm}' at position ${i}: ${newPerm}`
        );
      }
    }

    // Update the list with newly generated permutations
    permutations = newPermutations;

    // Debug: Show permutations after adding current character
    console.log(`After adding '${char}', permutations are:`, permutations);
  }

  return permutations;
}

// Try it
console.log("Final permutations:", getPermutationsIterative("abc"));
// Output: ["abc", "bac", "bca", "acb", "cab", "cba"]
