#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int solveTab(string text1, string text2) {
        // Create a DP table initialized to 0
        vector<vector<int>> dp(text1.length() + 1, vector<int>(text2.length() + 1, 0));

        // Fill the table from bottom-right to top-left
        for (int i = text1.length() - 1; i >= 0; i--) {
            for (int j = text2.length() - 1; j >= 0; j--) {
                int ans = 0; // Initialize ans for this cell
                if (text1[i] == text2[j]) {
                    ans = 1 + dp[i + 1][j + 1]; // Characters match
                } else {
                    ans = max(dp[i + 1][j], dp[i][j + 1]); // Take max from down or right
                }
                dp[i][j] = ans; // Store the result in DP table
            }
        }

        // The answer for the full strings is stored in dp[0][0]
        return dp[0][0];
    }

    int longestCommonSubsequence(string text1, string text2) {
        // Call the tabulation-based solution and return the result
        return solveTab(text1, text2);
    }
};

int main() {
    Solution sol;
    string text1 = "abcde";
    string text2 = "ace";

    // Call and print the result
    cout << "Longest Common Subsequence: " << sol.longestCommonSubsequence(text1, text2) << endl;

    return 0;
}
