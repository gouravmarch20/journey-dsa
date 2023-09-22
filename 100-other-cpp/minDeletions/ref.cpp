// class Solution {
// public:
//     int minDeletions(string s) {
//         vector<int>m1(26,0);
//         int ans=0;

//         for(char c:s) m1[c-'a']++;

//         sort(m1.rbegin(),m1.rend());

//         for(int i=1;i<26 && m1[i]!=0 ;i++){
//             while(m1[i]>=m1[i-1] && m1[i]!=0){
//                 m1[i]--;
//                 ans++;
//             }

//         }

//         return ans;
        
//     }
// };
