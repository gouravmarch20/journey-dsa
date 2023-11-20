// class Solution {
//  public:
//   int bs(vector<int> arr, int target, int s, int e) {
//     int m = s + (e - s) / 2;
//     while (s <= e) {
//       int m = s + (e - s) / 2;

//       if (arr[m] == target) {
//         return m;
//       } else if (target > arr[m]) {
//         s = m + 1;
//       } else {
//         e = m - 1;
//       }
//     }
//     return -1;
//   }

//   int findPivotIndexWay2(vector<int> arr) {
//     int s = 0;
//     int e = arr.size() - 1;
//     while (s < e) {
//       int m = s + ((e - s) / 2);
//       if (s == e) {
//         return s;
//       }
//       if ((m + 1 < arr.size()) && arr[m] > arr[m + 1]) {
//         return m;
//       } else if (m - 1 >= 0 && arr[m - 1] > arr[m]) {
//         return m - 1;
//       } else if (arr[s] > arr[m]) {
//         e = m - 1;
//       } else {
//         s = m + 1;
//       }
//     }
//     return s;
//   }

//   int findPivotIndex(vector<int> arr) {
//     int s = 0;
//     int e = arr.size() - 1;
//     while (s <= e) {
//       int m = s + ((e - s) / 2);
//       //! address issue avoid first two case :: valid index or not
//       if ((m + 1 < arr.size()) && arr[m] > arr[m + 1]) {
//         return m;
//       } else if (m - 1 >= 0 && arr[m - 1] > arr[m]) {
//         return m - 1;
//       } else if (arr[s] >= arr[m]) {
//         e = m;
//       } else if (arr[s] < arr[m]) {
//         s = m + 1;
//       }
//     }
//     return s;
//   }
//   int search(vector<int>& nums, int target) {
//     int pivot = findPivotIndex(nums);
//     //* this is not a mountain peek question --> infinite loop
//^ mountain has 2 case --> l1 or( l2 + peek) and peek can not loose
// ~here l1 sai l2 alway less --> if both equal mid , (mid -1 , mid+1) seprate
//~ if case
//     // int pivot = findPivotIndexWay2(nums);

//     // line1 bs search
//     if (target >= nums[0] && target <= nums[pivot]) {
//       int ans = bs(nums, target, 0, pivot);
//       return ans;
//     }
//     // line2 bs search
//     if (pivot + 1 < nums.size() && target >= nums[pivot + 1] &&
//         target <= nums[nums.size() - 1]) {
//       int ans = bs(nums, target, pivot + 1, nums.size() - 1);
//       return ans;
//     }
//     // else return
//     return -1;
//   }
// };