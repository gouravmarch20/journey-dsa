// class Solution {
// public:
//     string decodeString(string s) {
        
//         string answer = "";

//         for(auto ch:s){
//             if(ch != ']'){
//                 answer += ch;
//             }else{
                
//                 // taking substr
//                 string substr = "";
//                 while(answer.back() != '['){
//                     substr = answer.back() + substr;
//                     answer.pop_back();
//                 }

//                 // removing opening bracket
//                 answer.pop_back();

//                 // taking number k
//                 string k= "";
//                 while(!answer.empty() and isdigit(answer.back())){
//                     k = answer.back() +  k;
//                     answer.pop_back();
//                 }
                
//                 // multiplying the k to substr
//                 string aftermultiply = "";
//                 // int n = k.size()!=0 ? stoi(k):0;
//                 int n = stoi(k);
//                 for(int i=1; i<=n; i++)
//                     aftermultiply += substr;
                
//                 // Storing back the substr after multiply
//                 answer += aftermultiply;
//             }
//         }
//         return answer;
//     }
// };