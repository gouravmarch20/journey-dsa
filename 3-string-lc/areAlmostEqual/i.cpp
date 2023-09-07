// class Solution {
// public:
//     bool areAlmostEqual(string s1, string s2) {
//         if(s1.length() != s2.length()){
//             return false;
//         }
//         if(s1 == s2) return true;//^ miss 

//         int d1 = -1;//M can not leave empty like javascript auto asign int min
//         int d2 = -1;//M what if index is 0 diff string --> if case mai zero consider as false so assign -1


//         for(int i = 0 ; i < s1.length() ; i++){
//             if(s1[i] == s2[i]){

//             }else{
//                 if(d1 == -1){
//                     d1 = i;
//                 }else{
//                     if(d2 == -1){
//                         d2 = i;
//                     }else{
//                         return false;
//                     }
//                 }
//             }
//         }
//         //M what if d1 is -1 , string issue to swap miss this
//         if(d1 == -1 || d2 == -1) return false;
//         swap(s2[d1] , s2[d2]);
//         if(s1 == s2){
//             return true;
//         }else{
//             return false;
//         }
//     }
// };