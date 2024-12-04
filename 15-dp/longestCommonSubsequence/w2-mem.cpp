#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // For max()

using namespace std;

class Solution {
public:
    int memSol(string &text1, string &text2, int i, int j,   vector<vector<int>>  &dp) {
        // Base case: If either string is exhausted
        if (text1.size() <= i || text2.size() <= j) {
            return 0;
        }

        // If the value is already computed, return it
        if (dp[i][j] != -1) return dp[i][j];

        int ans = 0;

        // If characters match, move both pointers
        if (text1[i] == text2[j]) {
            ans = 1 + memSol(text1, text2, i + 1, j + 1, dp);
        } else {
            // Otherwise, try both options and take the maximum
            ans = max(memSol(text1, text2, i + 1, j, dp), 
                      memSol(text1, text2, i, j + 1, dp));
        }

        // Store the computed result in dp
        dp[i][j] = ans;

        return dp[i][j];
    }

    int longestCommonSubsequence(string text1, string text2) {
        // Initialize a DP table filled with -1
        vector<vector<int>> dp(text1.size() + 1, vector<int>(text2.size() + 1, -1));

        // Call the recursive helper function
        return memSol(text1, text2, 0, 0, dp);
    }
};

int main() {
    // Example usage of the Solution class
    Solution sol;

    string text1 = "abcde";
    string text2 = "ace";

    // Find and output the length of the longest common subsequence
    cout << "Longest Common Subsequence: " << sol.longestCommonSubsequence(text1, text2) << endl;

    return 0;
}
