// class Solution {
// public:
//     int coinChangeRec(vector<int>& coins, int amount){
//         //base case 
//         if(amount < 0 ) return INT_MAX;
//         if(amount == 0) return 0;
//         //
//         int mini = INT_MAX;
//         for(int i = 0 ; i < coins.size() ; i++){
//             int res = coinChangeRec(coins , amount - coins[i]);
// // ! avoid INT_MAX ==> case min(INT_MAX , INT_MAX) => INT_MAX + 1 -> signed integer overflow
//             if(res != INT_MAX){
//                   mini = min(mini , res) + 1; 
//             }
          
//         }
//         return mini;
//     }
//     int coinChange(vector<int>& coins, int amount) {
         
//         int ans = coinChangeRec(coins , amount );
//         if(ans == INT_MAX) return -1;
//         return ans;
//     }
// };