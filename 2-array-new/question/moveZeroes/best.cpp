
//  #include <iostream>
//  #include <queue>
// #include <stack>
// #include <vector>
// using namespace std;

// class Solution {
//    public:
//     void(vector<int>& nums, int k) {
//         int n = nums.size();
//         k = k % n;           // Handle cases where k >= n
//         if (k == 0) return;  // No rotation needed if k == 0

//         // Reverse the last n - k elements (elements before the rotation point)
//         reverse(nums.begin(), nums.begin() + k);

//         // Reverse the first k elements (elements after the rotation point)
//         reverse(nums.begin() + k, nums.end());

//         // Reverse the entire array
//         reverse(nums.begin(), nums.end());
//     }
// };