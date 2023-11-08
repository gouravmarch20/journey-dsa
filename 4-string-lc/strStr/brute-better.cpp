// class Solution {
//  public:
//   int strStr(string haystack, string needle) {
//     int m = haystack.size();
//     int n = needle.size();
//     for (int i = 0; i < m; i++) {
//       for (int j = 0; j < n; j++) {
//         if (haystack[i + j] != needle[j]) {
//           break;
//         }
//  // if(n == j)//! increase haystack[i+j] and not same needle as empty string
        
//         if (n - 1 == j) {
//           return i;
//         }
//       }
//     }
//     return -1;
//   }
// };