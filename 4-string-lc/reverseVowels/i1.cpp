// class Solution {
// public:
//     bool isVowel(char ch){
//       ch = tolower(ch);//^ m1 : toLower used --> capital L
//       return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
//     }

//     string reverseVowels(string s) {
//       int l = 0 ,  h = s.size() - 1 ;
//       while(l < h){
//         //^ m3 forgot while loop
        
//         if( isVowel(s[l]) && isVowel(s[h])   ){
//           swap(s[l] , s[h]);
//           l++ , h--;
//         // }else if(s[l] == 0){// M forgot function call
//         }else if(isVowel(s[l]) == 0){//^ m2 : wrong write isVowel(s[l]== 0)
//           l++;
//         }else{
//           h--;
//         }

//       }
//         return s;
//     }
// };