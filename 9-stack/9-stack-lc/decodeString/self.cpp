// class Solution {
// public:
//     string decodeString(string s) {
//            stack <string> stStr;
//            stack <int> stNum;
//            int no = 0 ;
//            for(auto ch : s){
//              if(isdigit(ch)){
//                no = (no * 10) + (ch - '0');
//              }else if(ch == ']'){
//                string finalString = "";
//                string toRepet = "";
//                while(stStr.top() != "["){
//                  toRepet += stStr.top() ;
//                 //  repeatStr.push_back(stStr.top());
//                  stStr.pop();
//                }
//                stStr.pop();

//               int tempNo = stNum.top();
//               stNum.pop();
//               //
//               while(tempNo > 0){
//                 // repeatStr.push_back(repeatStr);//^ 1 char only at back
//                //* L: have 2 string one two store repeat char , other to
////*L:                multiply given digit
//                 finalString += toRepet;//M finalString += finalString

//                 tempNo--;
//               }
//               stStr.push(finalString);
//               cout << "the size " << stStr.size() <<" ";
//               cout << "the  " << stNum.size() <<" ";

//              }else if(ch =='['){
//                stNum.push(no);
//                no = 0;
//                string sCh = string(1 , ch);
//                stStr.push(sCh);
//              }else{
//                string sCh = string(1, ch);//L: not directly char to string
//                stStr.push(sCh);
//              }
//            }
//            //^ m bad dry run --> solved remain in stack
//             string result = "";
//            while(stStr.empty() == false){
//              string str = stStr.top();
//              result += str;
//              stStr.pop();

//            }
//           //  result.reverse(result.begin() , result.end());//M
//           reverse(result.begin() , result.end());
//          return  result;
//     }
// };