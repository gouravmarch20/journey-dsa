// class Solution {
// public:
//     int bottomUpFib(int n , vector <int> & dp){
//         //step2: bottom case fill -> base case of top down 
//         dp[0] = 0;
//         if(n == 0) return 0;//! address issue :: array size depend on n
//         dp[1] = 1;//! if n = 0 , vector 1 size means 1 index not in dp array
        
//         //step3: itterate till n and get n val
//         for(int i = 2 ; i <= n ; i++){
//             dp[i] = dp[i-1] + dp[i-2];
//         }
        
//         return dp[n];
//     }
//     int fib(int n) {
//         //step1:

//         vector <int> dp(n+1 , -1);
//         return bottomUpFib(n , dp);
//     }
// };