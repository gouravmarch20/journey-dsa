// class Solution {
//  public:
//   bool cleanCode(vector<int>& arr) {
//     bool isTouchFirstLine = false;
//     bool isTouchSecondLine = false;
//     int n = arr.size() - 1;
//     int i = 0;

//     while (i != n && arr[i] < arr[i + 1]) {
//       isTouchFirstLine = true;
//       i++;
//     }
//     while (i != n && arr[i] > arr[i + 1]) {
//       isTouchSecondLine = true;
//       i++;
//     }
//     if (i == n && isTouchFirstLine && isTouchSecondLine) {
//       return true;
//     }
//     return false;
//   }

//   bool self(vector<int>& arr) {
//     int n = arr.size();
//     int i = 0;
//     //! m1 : avoid whole itteration i+1 check
//     for (; i < n - 1; i++) {
//       if (arr[i] < arr[i + 1]) {
//         continue;
//       } else {
//         //! m2: forgot when to break
//         break;
//       };
//     }
//     //^ consumed all , not any consumed
//     if (i == 0 || i == n - 1) return false;

//     for (int j = n - 1; j > i; j--) {
//       if (arr[j] < arr[j - 1]) {
//         continue;
//       } else
//         return false;
//     }

//     return true;
//   }

//   bool validMountainArray(vector<int>& arr) { 
//     self(arr); 
//     cleanCode(arr); 
//     }
// };