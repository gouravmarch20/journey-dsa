// class Solution {
// public:

//     void ind(vector<int>& nums, vector<int>& ans, int mid, int target) {
//         if (mid == -1) {
//             ans = {-1, -1};
//             return; 
//         }

        
//         int st = mid, en = mid;

      
//         while (st > 0 && nums[st - 1] == target) {
//             st--;
//         }

       
//         while (en < nums.size() - 1 && nums[en + 1] == target) {
//             en++;
//         }

//         ans = {st, en};
//     }

//     vector<int> searchRange(vector<int>& nums, int target) {
//         int start = 0, end = nums.size() - 1;
//         vector<int> ans;

//         while (start <= end) { 
//             int mid = start + (end - start) / 2;

//             if (nums[mid] == target) {
//                 ind(nums, ans, mid, target);
//                 return ans; 
//             } else if (nums[mid] > target) {
//                 end = mid - 1;
//             } else {
//                 start = mid + 1;
//             }
//         }

//         ans = {-1, -1}; 
//         return ans;
//     }
// };
