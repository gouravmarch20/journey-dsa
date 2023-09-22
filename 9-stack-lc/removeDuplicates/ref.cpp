// class Solution {
// public:
//     string removeDuplicates(string s, int k) {
//         vector<char>vec(100000);
//         long long int j=-1;
//         for(long long int i=0;i<s.size();i++)
//         {
//             if(j==-1)
//             {
//                 j++;
//                 vec[j]=s[i];
//             }
//             else if(vec[j]==s[i] && j+1>=k-1)
//             {
//                 int flag=1;
//                 for(long long int z=(j+1)-(k-1);z<=j;z++)
//                 {
//                     if(vec[z]!=s[i])
//                     {
//                         flag=0;
//                         break;
//                     }
//                 }
//                 if(flag)
//                 j-=(k-1);
//                 else
//                 {
//                     vec[++j]=s[i];
//                 }
//             }
//             else
//             vec[++j]=s[i];
//         }
//         string ans="";
//         cout<<" value of  j"<<j<<endl;
//         for(int i=0;i<=j;i++)
//         {
//             ans+=vec[i];
//         }
//         return ans;
//     }
// };