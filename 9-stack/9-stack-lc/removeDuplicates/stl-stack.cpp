// class Solution {
// public:
//     string removeDuplicates(string s, int k) {
//       stack <pair <char , int>> st;
//       string ans;
//       for(auto ch : s){
//         if(st.size() == 0 || st.top().first != ch){
//           st.push({ch , 1});
//         }else{
//           st.top().second++;
//         }
//         if(st.top().second == k){
//           st.pop();
//         }
//       }
//       //NOTE: stack can not be itterate by loop , forEach
//       //M: tried forEach loop
//       while(!st.empty()) {
//         ans.append(st.top().second , st.top().first);
//         st.pop();
//     }
//       reverse(ans.begin() , ans.end());
//       return ans;
//     }
// };