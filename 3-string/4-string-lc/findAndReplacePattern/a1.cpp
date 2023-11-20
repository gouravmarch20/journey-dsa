// class Solution {
// public:
//     void makeStandard(string & st){
//!m1         // int <char> mapping[300] = {0};// syntax error
//         char mapping[300] = {0};
//         char start = 'a';
//         for(int i = 0 ; i < st.size() ; i++){
//             if(mapping[st[i]] == 0){
//                 mapping[st[i]] = start;
//                 start++;
//             }
//         }
//         for(int i = 0 ; i < st.length() ; i++){
//             char ch = st[i];
//             st[i] = mapping[ch];
//         }
//     }

//     vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
//         vector <string> ans;
//         makeStandard(pattern);
//  //^ think to use string , is good learning --> how to pattern compare 
//         for(int i = 0; i < words.size() ; i++){
//             string tempString = words[i];
//             makeStandard(tempString);
//             if(tempString == pattern){
//                 //!m2: words ko push back
//* L1: string can push_back
//                 ans.push_back(words[i]);
//             }
//         }
//         return ans;
//     }
// };