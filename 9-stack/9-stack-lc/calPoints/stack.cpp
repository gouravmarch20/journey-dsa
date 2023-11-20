// class Solution {
// public:
//     int calPoints(vector<string>& operations) {
//         stack <int> st;
//         int s = 0;
//         for(int i = 0 ; i < operations.size() ; i++){
           // char ch = operations[i];//M1 string type not char
//           string ch = operations[i];
//           //^ m2: change form ' ' to " "
//           if(ch == "+"){
//             int n1 = st.top();
//             st.pop();
//             int n2 = st.top();
//             st.push(n1);
//             st.push(n1 + n2);
//           }else if(ch == "D"){
//             int n1 = st.top();
//             st.push(n1 * 2);
//           }else if(ch == "C"){
//             st.pop();
//           }else{
//             cout << ch << " "<< stoi(ch) << endl;
//             st.push(stoi(ch));//NOTE: learning
//           }
//         }
         // while(!operations.empty()){//^m3 coding mistake
//           while(!st.empty()){
//           s += st.top();
//           st.pop();
//         }
//         return s;
//     }
// };