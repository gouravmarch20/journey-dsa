// class Solution {
//  public:
//   int expandAroundIndex(string s, int l, int r) {
//     int n = s.length();
//     int c = 0;
//     while (l >= 0 && r < n && s[l] == s[r]) {
//       c++;
//       l--;
//       r++;
//     }
//     return c;
//   }
//   int countSubstrings(string s) {
//     int c = 0;  // count
//     int n = s.length();
//     for (int center = 0; center < n; center++) {
//       // odd
//       int oddAns = expandAroundIndex(s, center, center);
//       // even
//       int evenAns = expandAroundIndex(s, center, center + 1);
//       c += evenAns + oddAns;
//     }
//     return c;
//   }
// };