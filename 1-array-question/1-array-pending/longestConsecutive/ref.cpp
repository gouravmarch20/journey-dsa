// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         unordered_map<int,int>mp;
//         for(auto it:nums){
//             mp[it]++;
//         }
//         int ans=0,count=0;
//         for(auto it:nums){
//             if(mp[it-1]){
//                 continue;
//             }
//             else
//             {
//                 int j=it;
//                 count=0;
//                 while(mp[j]>=1){
//                     j++;
//                     count++;
//                 }
//                 ans=max(ans,count);
//             }
//         }
//         return ans;
//     }
// };