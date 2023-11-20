// class Solution {
//  public:
//   int peakIndexInMountainArray(vector<int>& arr) {
//     int s = 0;
//     int e = arr.size() - 1;

//     while (s < e) {
//       int m = (s + e) / 2;
//       if ((arr[m - 1] < arr[m]) && (arr[m] > arr[m + 1])) {
//         return m;
//       } else if (arr[m] > arr[m + 1]) {
//         e = m;
//       } else if (arr[m] < arr[m + 1]) {
//         s = m + 1;
//       }
//     }

//     return -1;
//   }
// };