// class Solution {
// public:
//     string removeDuplicates(string s) {
//       stack <char> st;//^m2 forgot
//       for(int i = 0 ; i < s.size() ; i++){
//         if((!st.empty() )&& s[i] == st.top()){
//           st.pop();
//         }else{
//           st.push(s[i]);
//         }
//       }
//       string ns = "";
//       while(!st.empty()){
//       ns.push_back(st.top());//NOTE st.top() return char type data
//        st.pop();
//       }
//       //? l1 reverse function not return anything, ref mai change 
//       reverse(ns.begin() , ns.end());//^ forgot reverse syntax
//       return ns;//^ 
//     }
// };