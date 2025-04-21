var checkValidString = function (s) {
    let minOpen = 0;
    let maxOpen = 0;
  
    for (const ch of s) {
      if (ch === "(") {
        minOpen++;
        maxOpen++;
      } else if (ch === ")") {
        minOpen = Math.max(minOpen - 1, 0);
        maxOpen--;
      } else if (ch === "*") {
        // * could be (, ) or empty
        minOpen = Math.max(minOpen - 1, 0); // if * is )
        maxOpen++; // if * is (
      }
  
      // Too many unmatched )
      if (maxOpen < 0) return false;
    }
  
    return minOpen === 0;
  };
  