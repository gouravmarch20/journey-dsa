// var reorganizeString = function (s) {
//     let n = s.length;
  
//     let map = new Map();
//     for (let ch of s) map.set(ch, (map.get(ch) || 0) + 1);
  
//     let arr = [...map].sort((a, b) => b[1] - a[1]);
  
//     let ans = [];
//     let i = 0;
//     for (let [ch, count] of arr) {
//       while (count--) {
//         if (ans[i - 1] === ch) return "";
//         ans[i] = ch;
//         i += 2;
//         if (i >= n) i = 1;
//       }
//     }
//     return ans.join("");
//   };
  