// class Solution {
// public:
//     int memSol(string s1 , string s2 , int i  , int j , auto & dp){
//         if(i == s1.length()){
//             return s2.length() - j;
//         }
//         if(j == s2.length()){
//             return s1.length() - i ;
//         }
//         // 
//         if(dp[i][j] != -1 ) return dp[i][j];
//         int ans = 0;
//         if(s1[i] == s2[j]){
//             ans =  memSol(s1 , s2 , i + 1 , j+1 , dp);
//         }else{
//             int inst = 1 + memSol(s1 , s2 , i , j + 1 , dp);
//             int del = 1 + memSol(s1 , s2 , i + 1 , j , dp);
//             int replace = 1 + memSol(s1 , s2 , i + 1, j + 1 , dp);
//            ans =  min(inst , min(del , replace));
//         }
//         dp[i][j] = ans;
//         return ans;
//     }
//     int minDistance(string word1, string word2) {
//         int maxL = max( word1.length() , word2.length() );
//         vector <vector<int>> dp(maxL, vector<int>(maxL , -1));
//        return  memSol(word1 , word2 , 0 , 0 , dp);
//     }
// };