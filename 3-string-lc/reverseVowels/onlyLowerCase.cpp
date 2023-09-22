
//// M  wrong question read --> only lowercase though
// class Solution {
// public:
//     bool isVowel(char ch){
//       if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
//         return true;
//       }
//       return false;
//     }
//     string reverseVowels(string s) {
//      int i = 0;
//      int e = s.length() -1 ;

//      while(i < e) {

//        while(i < e && ! isVowel(s[i])){
//          i++;
//        }
////^ m4:  forgot e >= 0 case
//    while(e >= 0  && ! isVowel(s[e])){
//          e--;
//        }
//     if(i < e ){//^ m2 : forgot 
//  swap(s[i] , s[e]);
//       i++;
//       e--;//^m3 :  what after swap , while hit not case -->TLE
//     }
     

//      }  
//      return s;
//   }
// };