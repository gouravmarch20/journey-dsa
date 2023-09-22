// class Solution {
// public:
//     string removeDuplicates(string s, int k) {
//         // stack<pair<char , int>> st;//M1 stack cpp stl-> can not handle pair
//         vector<pair <char , int>> st;//L2 to create my stack using vector
//         string ans ;
//         for(auto ch : s){
//           //M2 stack size zero case
//           //NOTE: it not a stack it's vector so top()
//           if(st.size() == 0 || st.back().first != ch){
//             //M3: forgot push_back wrote push
//             st.push_back({ch , 1});
//           }else{
//             st.back().second++;//^m4: thiking stack , but array it item 
//           }
//           if(st.back().second == k){
//             // M write pop()
//             st.pop_back();
//           }
//         }
               

//         //^m5 itteration mai thinking stack  
   
//         for(auto x : st){
//           ans.append(x.second , x.first);
//         }
//         return ans;
//     }
// };