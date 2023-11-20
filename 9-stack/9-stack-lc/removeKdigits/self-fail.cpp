// class Solution {
// public:
//     string removeKdigits(string num, int k) {
//         stack <int> st;
//         for(auto val : num){
//           int valInt = val - '0';//M --> char for mai auto store , in compare ascii value compare , st mai ascii store
//           // M k >= 0 --> 3 , 2 , 1 , 0  ==> 4 times run remove equal to 
//           while((k > 0) && (!st.empty()) && (st.top() > valInt) && (valInt != 0) ){
//             // if(!st.empty() && st.top() >= val){//^ num = 1234 , k = 2
//             //9245 , k = 
//               st.pop();
//               // cout << k << " ";
//               k--;//^ forgot
//           }
//           st.push(valInt) ;//
        
//         }
//       // M k>= 0
//         while(k > 0 &&  !st.empty()){
//           // if(st.size() == 1 && )
//           st.pop();
//           k--;
//         }

//         // while(st.empty() == false){
//         //   cout << st.top() << " ";
//         //   st.pop();
//         // }

//         string ans = "";
//         if(st.empty()) return 0;
//         while(!st.empty()){
         
//             // char ch = (st.top() - '0' );//^ acessing error giving , sandtion
//           // ans.push_back(stoi(st.top()));
//          // string age_as_string = to_string(st.top());
//          char digitChar = '0' + st.top(); 
//           ans.push_back(digitChar);
//           st.pop();
//         }
//         reverse(ans.begin() , ans.end());
//         return ans;
//     }
// };