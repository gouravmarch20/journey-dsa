// class Solution {
// public:
//     int patola(vector<int>& nums, int k){
//         int n = nums.size();
//         int maxi = 1;
//         for(int i=0; i<n-1; i++){
//             int count = 1;
//             int del = 0;
//             for(int j=i+1; j<n; j++){
//                 if(nums[i] == nums[j] and del<=k)
//                     count++;
//                 else
//                     del++;
//             }
//             maxi = max(maxi, count);
//         }
//         return maxi;
//     }

//     int longestEqualSubarray(vector<int>& nums, int k) {
//         // return patola(nums, k);

//         unordered_map<int,int> freq;
//         int n = nums.size();
//         int i=0;
//         int maxi = 0;
//         for(int j=0; j<n; j++){
//             freq[nums[j]]++;
//             maxi = max(maxi, freq[nums[j]]);

//             while(j-i+1 > maxi+k){
//                 freq[nums[i]]--;
//                 i++;
//             }
//         }
//         return maxi;
//     }
// };