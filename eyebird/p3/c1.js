function longestCommonPrefix(strs) {
  // 🧩 Edge case: empty input
  if (strs.length === 0) return "";

  // 🪄 Step 1: Assume the first word is the prefix
  let prefix = strs[0];

  // 🧠 Step 2: Compare this prefix with every other word
  for (let i = 1; i < strs.length; i++) {
    // Keep trimming prefix until current string starts with it
    while (!strs[i].startsWith(prefix)) {
      // remove the last character from prefix
      prefix = prefix.slice(0, -1);

      // if prefix becomes empty, there’s no common prefix
      if (prefix === "") return "";
    }
  }

  // ✅ Step 3: whatever remains is the longest common prefix
  return prefix;
}

// 🧪 Test Cases
console.log(longestCommonPrefix(["flower", "flow", "flight"]));
// Output: "fl"
// Explanation: "fl" is the longest start common in all words.

//   console.log(longestCommonPrefix(["dog", "racecar", "car"]));
//   // Output: ""
//   // Explanation: no common prefix in all strings.

//   console.log(longestCommonPrefix(["interview", "internet", "internal", "interval"]));
//   // Output: "inter"
//   // Explanation: All words start with "inter"

//   console.log(longestCommonPrefix(["apple", "app", "apricot"]));
//   // Output: "ap"

//   console.log(longestCommonPrefix(["a"]));
//   // Output: "a"

//   console.log(longestCommonPrefix([""]));
//   // Output: ""
