// class Solution {
// public:
//     string removeDuplicates(string s) {
//       int safe = 0;
//       for(int i = 0 ; i < s.size() ; i++){
//         if( safe > 0 && s[safe - 1] == s[i]){
//          safe--;
//         }else{
//           swap(s[safe] , s[i]);
//           safe++;
//         }
//       }
//       return s.substr(0 ,safe);
//     }
// };