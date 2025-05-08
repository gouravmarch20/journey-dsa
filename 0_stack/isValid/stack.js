class Solution {
  isValid(s) {
    const st = [];
    for (const ch of s) {
      if (ch === "(" || ch === "{" || ch === "[") {
        st.push(ch);
      } else if (
        st.length > 0 &&
        ((st[st.length - 1] === "(" && ch === ")") ||
          (st[st.length - 1] === "{" && ch === "}") ||
          (st[st.length - 1] === "[" && ch === "]"))
      ) {
        st.pop();
      } else {
        return false;
      }
    }
    return st.length === 0;
  }
}
