// class Solution {
//  public:
//   bool isSubsequence(string s, string t) {
//     int sL = s.size();
//     int tL = t.size();

//     int i = 0, j = 0;
//     while (i < sL && j < tL) {
//       if (s[i] == t[j]) {
//         i++;
//         j++;
//       } else {
//         j++;
//       }
//     }
//     if (i == sL) return true;
//     return false;
//   }
// };