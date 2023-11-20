// class Solution {
// public:
//     int calPoints(vector<string>& operations) {
//         vector <int> scores;
//         int s = 0;
//         int size = 0;
//         for(auto ch : operations){
//           if(ch == "+"){
//             scores.push_back(scores[size - 1] + scores[size -2 ]);
//             size++;
//           }else  if(ch == "D"){
//             int n1 = scores[size - 1 ];//^ m1 size -1 curr item
//             scores.push_back(2*n1);
//             size++;
//           }else if(ch == "C"){
//             scores.pop_back();
//             size--;
//           }else{
//             scores.push_back(stoi(ch));
//             size++;
//           }
//         }
//         for(auto i : scores){
//           s += i;
//         }
//         return s;
//     }
// };