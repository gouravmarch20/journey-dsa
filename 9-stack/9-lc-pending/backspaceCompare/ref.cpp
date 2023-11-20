// class Solution {
// public:
//     bool backspaceCompare(string s, string t) {
//         string first="",second="";
//         stack<char>st;
//         for(auto x:s)
//         {
//             if(x=='#')
//             {
//                 if(!st.empty())
//                 st.pop();
//             }
//             else
//             st.push(x);
//         }
//         while(!st.empty())
//         {
//             first=st.top()+first;
//             st.pop();
//         }
//         for(auto x:t)
//         {
//             if(x=='#')
//             {
//                 if(!st.empty())
//                 st.pop();
//             }
//             else
//             st.push(x);
//         }
//         while(!st.empty())
//         {
//             second=st.top()+second;
//             st.pop();
//         }
//         return first==second;
//     }
// };