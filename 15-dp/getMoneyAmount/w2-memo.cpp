// class Solution {
// public:

//     int recSol(int start , int end ,  vector<vector<int> > & dp){
//         if(start == end ){
//             return 0;
//         }
//         if(start > end){
//             return 0;
//         }
//         if(dp[start][end] != -1) return dp[start][end];

//         int amount  = INT_MAX ;

//         for(int i = start ; i <= end ; i++){ 
//           amount = min(amount, i + max(recSol(start, i - 1 , dp), recSol(i + 1, end , dp)));
//         }
//         dp[start][end] = amount ; 
//         return amount;
//     }
//     int getMoneyAmount(int n) {
//         vector<vector<int> > dp(n+1 , vector<int>(n+1 , -1));
//         int i =1;
//         int e = n;
//         return recSol(i , e , dp);
//     }
// };