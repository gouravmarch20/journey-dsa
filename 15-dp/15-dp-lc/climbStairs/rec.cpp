// class Solution {
// public:
//     int recClimbStair(int n){
//         if(n == 0) return 1;
//         if(n < 0) return 0;
//         int oneStepWays = recClimbStair(n-1);
//         int twoStepWays = recClimbStair(n-2);
//         return oneStepWays + twoStepWays;
//     }
//     int climbStairs(int n) {
//         return recClimbStair(n);
//     }
// };