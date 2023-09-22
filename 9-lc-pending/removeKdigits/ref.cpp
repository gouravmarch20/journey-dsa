// class Solution {
// public:
//     string removeKdigits(string num, int k) {
//         if(num.size()<=k)
//         {
//             return "0";
//         }
//         if(k==0)
//         return num;
//         stack<char>st;
       
//         for(int i=0;i<num.size();i++)
//         {
//             while(k>0 && !st.empty() && st.top()>num[i])
//             {
//                 --k;
//                 st.pop();
                
//             }
//             st.push(num[i]);

//             if(st.size()==1 && num[i]=='0')
//             st.pop();
//         }
//         while(k>0 && !st.empty())
//         {
//             --k;
//             st.pop();
            
//         }
//         string ans="";
//         while(!st.empty())
//         {
//             ans.push_back(st.top());
//             st.pop();
//         }
//         if(ans.size()==0)
//         ans="0";
//         reverse(ans.begin(),ans.end());
//         return ans;

//     }
// };