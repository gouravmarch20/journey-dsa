// class Solution {
// public:
//? how to reverse 2d matrix each row ::  custom fuction 
//     void myReverse(vector<int> & arr){

//     int start = 0 ;
//     int end = arr.size() -1 ;
    
//     while(start < end){
//         swap(arr[start] , arr[end]);
//         start++;
//         end--;
//     }
//     }
//     void rotate(vector<vector<int>>& matrix) {
//         //step 1: do transpose
//         for(int i = 0 ; i < matrix.size() ; i++){
//             for(int j = i ; j < matrix[0].size() ; j++){
//                 swap(matrix[i][j] , matrix[j][i]);
//             }
//         }
//         // step 2 : reverse row
//         for(int i = 0 ; i < matrix.size() ; i++){
//             myReverse(matrix[i] );
//         }
//     }
// };