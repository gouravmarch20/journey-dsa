// class Solution {
// public:
//     int pivotInteger(int n) {
//         vector <int> leftSum(n);
//         vector <int> rightSum(n);
//         //! m2: 0 sai itterate
//         //! m1 : not include n --> not array it number
//         for(int i = 1 ; i <= n ;i++){
//             if(i == 1 ) leftSum[0] = i;
//             else{
//                 leftSum[i-1] = leftSum[i-2] + i;
//             }
//         }
//         for(int i = n ; i > 0 ;i--){
//             //^ if case issue
//             if(i == n ) rightSum[i-1] = i;
//             else{
//                 rightSum[i-1] = rightSum[i] + i;
//             }
//         }
//         //^m3: array itteration n exclude , 0
//         for(int i = 0 ; i < n ; i++){
//             if(leftSum[i] == rightSum[i]) return i + 1;
//         }
//         return -1;
//     }
// };