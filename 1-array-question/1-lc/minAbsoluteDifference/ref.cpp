// class Solution {
// public:
//     int minAbsoluteDifference(vector<int>& nums, int x) {
//         int ans=INT_MAX;
//         set<int>st;
//         for(int j=x;j<nums.size();j++)
//         {
//             st.insert(nums[j-x]);
//             auto it=st.lower_bound(nums[j]);
//             if(it==st.end())
//             it--;
//             int value=*it;
//             ans=min(ans,abs(nums[j]-value));

//             if(it==st.begin())
//             continue;
//             it--;
//             value=*it;
//             ans=min(ans,abs(nums[j]-value));
//         }
//         return ans;
//     }
// };