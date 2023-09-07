// class Solution {
//  public:
//   int LastIndex(string s, char p) {
//     // complete the function here
//     int i = 0;
//     int ans = -1;//M forget if not found case 
//     for (auto ch : s) {
//       if (ch == p) {
//         ans = i;
//       }
//       i++;
//     }
//     return ans;
//   }
// };