// class Solution {
//  public:
//   string withMap(string key, string message) {
//     char start = 'a';
//     unordered_map<char, char> arrMap;
//     string ans;
//     for (char ch : key) {
//       if (ch != ' ' && arrMap[ch] == 0) {
//         arrMap[ch] = start;  // char ::: type convert into ascii in compile
//         start++;
//       }
//     }
//     //
//     for (auto ch : message) {
//       if (ch == ' ') {
//         ans.push_back(' ');
//       } else {
//         char val = arrMap[ch];
//         ans.push_back(val);
//       }
//     }
//     return ans;
//   }
//   string withArray(string key, string message) {
//     char start = 'a';
//     char arrMap[260] = {0};  // index mai value store :: 0 to 256 range
//     vector<char> arrMap(260, 0);

//     string ans;
//     for (char ch : key) {
//       if (ch != ' ' && arrMap[ch] == 0) {
//         arrMap[ch] = start;  // char ::: type convert into ascii in compile
//         start++;
//       }
//     }
//     //
//     for (auto ch : message) {
//       if (ch == ' ') {
//         ans.push_back(' ');
//       } else {
//         char val = arrMap[ch];
//         ans.push_back(val);
//       }
//     }
//     return ans;
//   }
//   string decodeMessage(string key, string message) {
//     withMap(key, message);
//     withArray(key, message);
//   }
// };