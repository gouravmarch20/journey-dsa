#include <vector>
#include <map>
#include <climits>
using namespace std;

class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        map<int, int> freqMap;

        // Count frequencies
        for (int num : nums) {
            freqMap[num]++;
        }

        int maxFreq = 0, secMaxFreq = 0;
        int maxVal = -1, secMaxVal = -1;

        // Traverse frequency map to find most and second most frequent
        for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
            int value = it->first;
            int freq = it->second;

            if (freq > maxFreq) {
                // Update second max before updating max
                secMaxFreq = maxFreq;
                secMaxVal = maxVal;

                maxFreq = freq;
                maxVal = value;
            } else if (freq > secMaxFreq) {
                secMaxFreq = freq;
                secMaxVal = value;
            } else if (freq == secMaxFreq) {
                secMaxVal = min(secMaxVal, value); // Handle tie case
            }
        }

        return secMaxVal;
    }
};
