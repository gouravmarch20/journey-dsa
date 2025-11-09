function isValid(s) {
    const stack = [];
  
    for (let i = 0; i < s.length; i++) {
      const ch = s[i];
  
      if (ch === '(' || ch === '{' || ch === '[') {
        stack.push(ch);
      } else {
        // When character is closing bracket
        if (stack.length > 0) {
          const topChar = stack[stack.length - 1];
  
          if (
            (ch === ')' && topChar === '(') ||
            (ch === '}' && topChar === '{') ||
            (ch === ']' && topChar === '[')
          ) {
            stack.pop();
          } else {
            return false;
          }
        } else {
          // Stack is empty, but closing bracket found
          return false;
        }
      }
    }
  
    return stack.length === 0;
  }
  
  // Example usage
  const s = "{()}";
  const result = isValid(s);
  console.log(result); // Output: true
  