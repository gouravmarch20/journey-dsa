// class Solution {
// public:
//     int pivotInteger(int n) {
//         int i = 1 ;
//         for(int i = 1 ; i <= n ; i++){
//             int leftSum = (i * (i + 1)) / 2;
//             //*L: sum of n-1 natural no --->  n * n - 1 / 2
 //           // int rightSum =( (n * (n+1))/2) - (i * (i - 1) / 2) ;
             //^ manually  can add - 1 in both side
            // int rightSum =( (n * (n+1))/2) - (i - 1 * (i - 1 + 1) / 2) ;

//             if(leftSum == rightSum ) return i ;
//         }
//         return -1;
//     }
// };