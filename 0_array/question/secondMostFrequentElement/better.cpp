// class Solution {
//    public:
//     int secondMostFrequentElement(vector<int>& nums) {
//         map<int, int> freqMap;
//         int maxFreq = 0;
//         int maxVal = -1;
//         int secMaxFreq = 0;
//         int secMaxVal = -1;
//         for (auto num : nums) {
//             freqMap[num]++;
//         }
//         //
//         for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
//             int key = it->first;
//             int value = it->second;
//             if (value > maxFreq) {
//                 secMaxFreq = maxFreq;
//                 secMaxVal = maxVal;
//                 maxFreq = value;
//                 maxVal = key;
//             } else if (value == secMaxFreq) {
//                 secMaxVal = min(secMaxVal, key);
//             } else if (secMaxFreq < value && value < maxFreq) {
//                 secMaxVal = key;
//                 secMaxFreq = value;
//             }
//         }
//         return secMaxVal;
//     }
// };