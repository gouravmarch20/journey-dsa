// class Solution {
// public:
//     bool search(vector<int>& nums, int target) {

//         int left=0;
//         int right=nums.size()-1;
//         int mid =left+(right-left)/2;

//         while(left<=right){
//            mid =left+(right-left)/2;
//            if(nums[left]==target || nums[right]==target|| nums[mid]==target){
//                return true;
//            } 
//            left++;
//            right--;
//         }
//         return false;
//     }
// };