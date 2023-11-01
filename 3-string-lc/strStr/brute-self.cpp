// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//          int cnt = 0;
//          int firstFoundChar = -1;
//         for(int i = 0 ; i < haystack.size() ; i++){
//             if(needle[cnt] == haystack[i]){
//                 firstFoundChar = i;
//                 cout << firstFoundChar << " "<<endl;
//                 while(i < haystack.size() && cnt < needle.size() && needle[cnt] == haystack[i] ){
//                     //  firstFoundChar = i;//!
//                      cnt++;
//                      i++;
//                 }
//                 if(cnt == needle.size()){
//                     return firstFoundChar;
//                 }else{
//         // i =firstFoundChar+1;//^m1 no need + 1 , i increase by one for loop
//                      i =firstFoundChar;//!m1: not itterating all character
//                     cnt = 0;
//                 }
               
//             }
//         }
//         return -1;
//     }
// };