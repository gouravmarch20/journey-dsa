// class Solution {
// public:
//     string convertToTitle(int columnNumber) 
//     {
//         int n = columnNumber;
//         int len=floor(log(n)/log(26))+1;
//         string ans(len, ' ');
//         while (n > 0) 
//         {
//             n--;
//             auto x = div(n, 26);
//             ans[--len]=char('A'+x.rem);
//             n = x.quot;
//         }
//         if (ans[0]==' ') ans=ans.substr(1);
//         return ans; 
//     }
// };