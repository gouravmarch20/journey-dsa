// class Solution {
// public:
//     bool repeatedSubstringPattern(string s) {
//         //sliding window
//         int r=0;
//         string res="";
//         while(r<(s.size()/2)){
//             // store substring into the window
//             res+=s[r];
//             string temp=res;
//             // duplicating the substring
//             while(temp.size()<s.size()) temp+=res;
//             //checking whether result is matching our original string
//             if(temp==s)  return true;
            
//             r++;
//         }
//         return false;

//     }
// };