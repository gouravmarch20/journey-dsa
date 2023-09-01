var calPoints = function (A) {
    for (let i = 0; i < A.length; i++) {
      if (A[i] == "C") {
        if (i - 1 >= 0) {
          A.splice(i - 1, 2);
          i -= 2;
        } else {
          A.splice(i, 1);
          i--;
        }
      }
    }
  
    let n = A.length;
  
    let last = Infinity,
      last_last = Infinity,
      sum = 0;
  
    for (let i = 0; i < n; i++) {
      let current = 0;
  
      switch (A[i]) {
        case "D":
          if (last != Infinity) current += 2 * last;
          break;
        case "+":
          if (last != Infinity) current += last;
          if (last_last != Infinity) current += last_last;
          break;
        default:
          current += +A[i];
          break;
      }
  
      sum += current;
  
      last_last = last;
      last = current;
    }
  
    return sum;
  };