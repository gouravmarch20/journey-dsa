// class Solution {
// public:
//     vector<int> nextGreaterElements(vector<int>& nums) {
//         int maxele=nums[0];
//         int index=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(maxele<=nums[i])
//             {
//                 maxele=nums[i];
//                 index=i;
//             }
//         }
//         vector<int>check;
//         for(int i=index+1;i<nums.size();i++)
//         {
//             check.push_back(nums[i]);
//         }
//         for(int i=0;i<=index;i++)
//         {
//             check.push_back(nums[i]);
//         }
//         vector<int>ans(nums.size());
//         stack<int>st;
//         for(int i=check.size()-1;i>=0;i--)
//         {
//             while(!st.empty() && st.top()<=check[i])
//             {
//                 st.pop();
//             }
//             if(st.empty())
//             ans[i]=-1;
//             else
//             ans[i]=st.top();

//             st.push(check[i]);
//         }
//         cout<<"check value "<<endl;
//         for(int i=0;i<ans.size();i++)
//         {
//             cout<<ans[i]<<" ";
//         }
//         cout<<endl;
//         vector<int>real(nums.size());
//         int j=0;
//         for(int i=index+1;i<nums.size();i++)
//         {
//             real[i]=ans[j++];
//         }
//         for(int i=0;i<=index;i++)
//         {
//             real[i]=ans[j++];
//         }
//         return real;
//     }
// };