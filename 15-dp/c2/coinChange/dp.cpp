// class Solution {
// public:
//     int coinChangeRec(vector<int>& coins, int amount , vector<int> & dp){
//         //base case 
//         if(amount < 0 ) return INT_MAX;
//         if(amount == 0) return 0;
//         if(dp[amount] != -1) return dp[amount];
//         //
//         int mini = INT_MAX;
//         for(int i = 0 ; i < coins.size() ; i++){
//             int res = coinChangeRec(coins , amount - coins[i] , dp);
// // ! avoid INT_MAX ==> case min(INT_MAX , INT_MAX) => INT_MAX + 1 -> signed integer overflow
//             if(res != INT_MAX){
//                   mini = min(mini , 1 + res) ; 
//             }
          
//         } 
//         cout << amount << ":" << mini <<" " ;
//         dp[amount] = mini;
//         return mini;
//     }
//     int coinChange(vector<int>& coins, int amount) {
//         vector<int> dp(amount + 1 , -1 );//^ thinking of creating when zero hit
//         int ans = coinChangeRec(coins , amount ,dp );
//         if(ans == INT_MAX) return -1;
//         return ans;
//     }
// };