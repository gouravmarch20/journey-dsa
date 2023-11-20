// class Solution {
// public:
//     bool isValid(string s) {
//         stack <char> st;
//         for(auto ch : s){
//           if(ch == '(' || ch == '{' || ch == '['){
//             st.push(ch);
//           }else{
//             if(st.empty()){
//               return false;
//             }else if(st.top() == '(' && ch == ')'){
//               st.pop();
//             }else if(st.top() == '{' && ch == '}'){
//               st.pop();
//             }else if(st.top() == '[' && ch == ']'){
//               st.pop();
//             }else{
//               //M forgot else case --> '(])'
//               //NOTE: what if not closing bracket
//               return false;
//             }
//           }
//         }
//         if(st.empty()){
//           return true;
//         }
//         return false;

//     }
// };