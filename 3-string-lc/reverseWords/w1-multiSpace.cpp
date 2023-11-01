// class Solution {
// public:
//     string reverseWords(string s) {
//        string ans ;
//        for(int i = 0 ; i < s.size() ; ){
//            string word = "";
//            //!m 2 not handling while case , i < s.size() , address leak
//            while(i < s.size() && s[i] != ' '){
//                cout << s[i];
//                word.push_back(s[i]);
//                i++;
//            }
//            //
//            reverse(word.begin() , word.end());//^ m1 reverse not return val
//         //    ans.push_back(word);//M 3 push_back for char type , else loop use
//            ans += word ;
//            while(i < s.size() && s[i] == ' '){
//             ans += s[i];
//                i++;
//            }
//        }
//        return ans; 
//     }
// };