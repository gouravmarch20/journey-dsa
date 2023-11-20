// class Solution {
//  public:
//   int garbageCollection(vector<string>& garbage, vector<int>& travel) {
//     // int lastP , lastM , lastG = 0;//!m wrong way
//     int lastP = 0, lastM = 0, lastG = 0;
//     int timeP = 0, timeM = 0, timeG = 0;
//     int pickP = 0, pickM = 0, pickG = 0;

//     for (int i = 0; i < garbage.size(); i++) {
//       string st = garbage[i];
//       for (auto ch : st) {
//         if (ch == 'M') {
//           pickM++;
//           lastM = i;
//         } else if (ch == 'P') {
//           pickP++;
//           lastP = i;
//         } else if (ch == 'G') {
//           pickG++;
//           lastG = i;
//         }
//       }
//     }
//     for (int i = 0; i < lastP; i++) {
//       timeP += travel[i];
//     }
//     for (int i = 0; i < lastM; i++) {
//       timeM += travel[i];
//     }
//     for (int i = 0; i < lastG; i++) {
//       timeG += travel[i];
//     }
//     return (timeP + timeM + timeG + pickP + pickM + pickG);
//   }
// };