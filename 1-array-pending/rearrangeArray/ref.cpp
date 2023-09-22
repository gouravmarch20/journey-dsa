// class Solution {
// public:
//     vector<int> solve(vector<int>& nums){
//         vector<int> pos,neg;
//         for(auto i:nums){
//             if(0<i)
//                 pos.push_back(i);
//             else
//                 neg.push_back(i);
//         }

//         int index = 0;
//         for(int i=0; i<nums.size(); i+=2, index++){
//             nums[i] = pos[index];
//             nums[i+1] = neg[index];
//         }
//         return nums;
//     }

//     vector<int> twopointer(vector<int>& nums){
//         int first = 0, second=0;
//         int n = nums.size();
//         vector<int> answer(n);
//         for(int i=0; i<n; i+=2){

//             while(first < n and nums[first]<0)
//                 first++;
            
//             while(second < n and nums[second]>0)
//                 second++;
            
//             answer[i] = nums[first];
//             answer[i+1] = nums[second];

//             first++;
//             second++;
//         }

//         return answer;
//     }

//     vector<int> rearrangeArray(vector<int>& nums) {
//         // Approach 1 using space
//         // return solve(nums);

//         // This problem can't be solve in O(1) space
//         return twopointer(nums);

//     }
// };