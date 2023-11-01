// class Solution {
// public:
//     string reverseWords( string s) {
//          istringstream my_stream(s);//~ like array store , when ever space
//          string word, result;

// while (my_stream >> word {//~ iterate until word become "",curr value at word
//               reverse(word.begin(), word.end());
//              result += word + " ";
//          }

//         if (!result.empty()) {
//             result.pop_back();  // Remove trailing space
//         }

//         return result;
//     }
// };