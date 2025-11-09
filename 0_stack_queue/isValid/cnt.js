class Solution {
  isValid(s) {
    let round = 0; // For ()
    let curly = 0; // For {}
    let square = 0; // For []

    for (const ch of s) {
      if (ch === "(") round++;
      else if (ch === ")") round--;
      else if (ch === "{") curly++;
      else if (ch === "}") curly--;
      else if (ch === "[") square++;
      else if (ch === "]") square--;

      // If any count goes negative, it's invalid
      if (round < 0 || curly < 0 || square < 0) {
        return false;
      }
    }

    // All counts must be 0 at the end
    return round === 0 && curly === 0 && square === 0;
  }
}
