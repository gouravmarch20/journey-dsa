// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         sort(nums.begin() , nums.end());
//         int n = nums.size();
//         int no = n / 3; 
//         vector <int> ans;
//         for(auto v : nums){
//             cout << v <<" ";
//         }
//         for(int i = 0 ; i < n ; i++){
//             int count = 0;
//    while(i  < n -1 && nums[i] == nums[i+1]){//M n -1 needs , memory leaks
//                 count++;
//                 i++;
//             }
//             if(count + 1 > no){
//                 ans.push_back(nums[i]);
//             }
//         }
//         return ans;
//     }
// };