// /*
// class Solution {
// public:
//     string removeDuplicates(string s) {        
//         string str = "";

//         for(int i=0; i<s.size(); i++){
//             if(!str.empty() && str.back() == s[i]){
//                 str.pop_back();
//             }else{
//                 str += s[i];
//             }
//         }

//         return str;    
//     }
// };
// */

// class Solution {
// public:
//    string removeDuplicates(string s) {
//         string ans="";
//         int i=0;
//         while(i<s.length())
//         {
//             if(ans.length()>0 and ans.back() == s[i])
//             {
//                 ans.pop_back();
//             }
//             else
//                 ans.push_back(s[i]);
//             i++;
//         }
//         return ans;
//     }
// };