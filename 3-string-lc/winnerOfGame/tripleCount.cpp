// class Solution {
// public:
//     bool winnerOfGame(string colors) {
//         //& first we count all triplets
//         //& the compare greater one -> will able to move more colored
// int aliceMoves = 0; int bobMoves = 0;
//  int n = color.size() - 1;
//         for(int i = 1 ; i < n  ;i++){
//             if(colors[i-1] == 'A' && colors[i] == 'A' && colors[i+1] == 'A'){
//                 aliceMoves++;
//             }
//         }
//         for(int i = 1 ; i <  n ;i++){
//             if(colors[i-1] == 'B' && colors[i] == 'B' && colors[i+1] == 'B'){
//                 bobMoves++;
//             }
//         }
//         return aliceMoves > bobMoves ? true : false;
//     }
// };