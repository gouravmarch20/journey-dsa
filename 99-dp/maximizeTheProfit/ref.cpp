// class Solution {
// public:
//     /*
//     bool available(vector<int>& want, vector<bool>& sold){
        
//         for(int i=want[0]; i<=want[1]; i++){
//             if(sold[i] == true)
//                 return false; // ghr to bik gya
//         }
//         return true;
//     }
    
//     int recursion(int index, vector<vector<int>>&offers, vector<bool> &sold, map<pair<int, vector<bool>>, int>& dp){
//         if(index == offers.size())
//             return 0;
        
//         if(dp.count({index, sold}))
//             return dp[{index, sold}];
      
//         int notselling =  recursion(index+1, offers, sold, dp);
        
//         int selling = 0;
//         if(available(offers[index], sold)){
//             for(int i=offers[index][0]; i<=offers[index][1]; i++){
//                 sold[i] = true;
//             }
            
//             selling = offers[index][2] + recursion(index+1, offers, sold, dp);
            
//              for(int i=offers[index][0]; i<=offers[index][1]; i++){
//                 sold[i] = false;
//             }
//         }
        
//         return dp[{index, sold}] = max(selling , notselling);
//     }
//     int tle(int n, vector<vector<int>>& offers){
//         vector<bool> sold(n, false);
//         map<pair<int, vector<bool>>, int> dp;
//         return recursion(0, offers, sold, dp);
//     }
    
//     */
    
//     int solve(int index, int prev, vector<vector<int>>& offers, vector<vector<int>> &dp){
//         if(index == offers.size())
//             return 0;
        
//         if(dp[prev+1][index] != -1){
//             return dp[prev+1][index];
//         }
        
//         int selling = 0, notselling=0;
//         if(prev == -1 || (offers[prev][1] < offers[index][0])){
//             selling = offers[index][2] + solve(index+1, index, offers, dp);
//         }
        
//         notselling = solve(index+1, prev, offers, dp);
        
//         return dp[prev+1][index] = max(selling, notselling);
//     }
    
//     int RecursionBS(vector<vector<int>>& events, int index, vector<int>& dp) {
//     if (index >= events.size())
//         return 0;
    
//     if(dp[index] != -1)
//         return dp[index];
        
//     int newindex = upper_bound(events.begin()+index, events.end(), vector<int>{events[index][1]+1, 0, 0}) - events.begin();
//     int include = events[index][2] + RecursionBS(events, newindex ,dp);
//     int exclude = RecursionBS(events, index + 1, dp);

//     return dp[index] = max(include, exclude);
// }
    
//     int maximizeTheProfit(int n, vector<vector<int>>& offers) {
//         // return tle(n, offers);
        
//         sort(offers.begin(), offers.end());
//         // int size = offers.size();
// // 
//         // vector<vector<int>> dp(size+1, vector<int>(size, -1));
//         // return solve(0, -1, offers, dp);
        
//         vector<int> dp(offers.size()+1, -1);
//         return RecursionBS(offers, 0, dp);
        
//     }
// };