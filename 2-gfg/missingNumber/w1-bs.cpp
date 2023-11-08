// class Solution{
//   public:
//     int missingNumber(vector<int>& array, int n) {

//         int s = 0;
//  //! m1 here N is not size --> n - 1 is size --> SO e = n - 2 :: end index 
//          int e = n - 2;

//         sort(array.begin() ,   array.end());
//         int missingNo = -1;//
//         while(s <= e){
//             int m = s + (e-s)/2;

//             if(array[m] - m == 2 ){
//                 missingNo = m ;
//                 e = m - 1;
//             }else {
//                 s = m + 1;
//             }
//         }

//~ question mai not given not found case ==> so assume not found case can occur
//         //^ forgot if not found --> means n is it ==>
//         if(missingNo == -1){
//             return n;
//         }
//         return missingNo + 1;//^ + 1 need
//     }
// };