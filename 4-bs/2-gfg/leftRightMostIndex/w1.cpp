// class Solution {
//  public:
//   long bsLeftMost(vector<long long> v, long long x) {
//     long s = 0;
//     long e = v.size() - 1;
//     long firstOccIndex = -1;

//     while (s <= e) {
//       long m = s + (e - s) / 2;
//       if (v[m] == x) {
//         firstOccIndex = m;
////* L: search area change next time
//         e = m - 1;
//       } else if (v[m] < x) {
//         s = m + 1;
//       } else {
//         e = m - 1;
//       }
//     }
//     return firstOccIndex;
//   }
//   long bsRightMost(vector<long long> v, long long x) {
//     long s = 0;
//     long e = v.size() - 1;
//     long lastOccIndex = -1;

//     while (s <= e) {
//       long m = s + (e - s) / 2;
//       if (v[m] == x) {
//         lastOccIndex = m;
// //*      L: search area change in lastMost occ , as compare to first most
//         s = m + 1;
//       } else if (v[m] < x) {
//         s = m + 1;
//       } else {
//         e = m - 1;
//       }
//     }
//     return lastOccIndex;
//   }
//   pair<long, long> indexes(vector<long long> v, long long x) {
//     // code here

//     pair<long, long> ans;

//     ans.first = bsLeftMost(v, x);
//     ans.second = bsRightMost(v, x);
//     return ans;
//   }
// };