// class Solution {
// public:
//     vector<int> nextGreaterElements(vector<int>& nums) {
//         stack <int> st;
//         int n = nums.size() ;
//         vector <int> ans(n);
//         //^ n = 4 double length 8 so 7 sai start
//         for(int i = 2 * n - 1 ; i >= 0 ; i--){
//           while(!st.empty() && st.top() <= nums[i%n]){
//             st.pop();
//           }
//           if(i < n){
//             if(st.empty()){
//               ans[i] = -1;//M forgot stack empty case
//             }else{
//               ans[i] = st.top();
//             }
//           }
//           st.push(nums[i%n]);
//         }
//         return ans;

//     }
// };