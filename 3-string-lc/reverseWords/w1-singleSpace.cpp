// class Solution {
// public:
//     string reverseWords(string s) {
//        string ans ;
//        for(int i = 0 ; i < s.size() ;i++ ){
//            string word = "";
//            //!M 2 not handling while case , i < s.size() , address leak
//            while(i < s.size() && s[i] != ' '){
//                word.push_back(s[i]);
//                i++;
//            }
//            //
//            reverse(word.begin() , word.end());//!m1 reverse not return val
//            ans += word ;
//            cout << s[i];
//         //   ans += s[i];//L: lc compiler not telling erro , at last word o
//* L1:sentence --> acessing of string index range
//          if (i < s.size()) {
//               ans += s[i];
//             }

//        }
//        return ans;
//     }
// };