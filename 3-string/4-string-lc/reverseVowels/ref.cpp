// /*
// class Solution {
// public:
//     bool vowel(char c){
//         c = tolower(c);
//         if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u')
//             return true;
//         return false;
//     }

//     string reverseVowels(string& s) {
//         int start=0, end=s.size()-1;

//         while(start<end){
//             while(start<end and !vowel(s[start])) start++;
//             while(start<end and !vowel(s[end])) end--;

//             if(start>end) break;
//             swap(s[start], s[end]);
//             start++, end--;
//         }

//         return s;
//     }
// };
// */


// class Solution {
// public:
//     bool checkVowels(char element){
//         char newChar = tolower(element);
//         if(newChar == 'a' || newChar == 'e' || newChar == 'i' || newChar == 'o' || newChar == 'u'){
//             return true;
//         }
//         else return false;
//     }
//     string reverseVowels(string s) {
//         int st = 0 ;
//         int end = s.size() - 1 ;
//         while(st < end){
//             // cout << "start = "<<st<<" end = "<<end<<endl;
//             // cout << s << endl;
//             if(checkVowels(s[st]) && checkVowels(s[end])){
//                 swap(s[st] , s[end]);
//                 st++;
//                 end--;
//             }
//             else if(checkVowels(s[st])){
//                 end--;
//             }
//             else if(checkVowels(s[end])){
//                 st++;
//             }
//             else{
//                 st++;
//                 end--;
//             }
//         }
//         return s;
//     }
// };