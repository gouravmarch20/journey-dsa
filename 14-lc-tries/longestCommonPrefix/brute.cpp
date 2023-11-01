// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         string ans = "";
//         string s = strs[0];
//         for(int i = 0 ; i < s.size() ; i++){
//             char ch = s[i];
//             bool isPrefix = true;//L: flag use :: if all have , all not have
// //*            determine
// for(int j = 1 ; j < strs.size() ; j++){
//                 if(ch != strs[j][i]) isPrefix = false;
//             }
//             if(isPrefix){
//                 ans.push_back(ch);
//             }else{//M forgot else case --> prefix continues string in given
//             strings
//                 return ans;
//             }
//         }
//         return ans;
//     }
// };