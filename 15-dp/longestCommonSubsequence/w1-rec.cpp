#include <iostream>
#include <string>
#include <algorithm> // For max()

using namespace std;

class Solution {
public:
    // Recursive function to calculate the LCS
    int recSol(string text1, string text2, int i, int j) {
        if (i >= text1.size() || j >= text2.size()) {
            return 0; // Base case: if either string is fully traversed
        }
        
        int ans = 0;
        if (text1[i] == text2[j]) {
            // Characters match, move both indices
            ans = 1 + recSol(text1, text2, i + 1, j + 1);
        } else {
            // Characters don't match, try skipping one character in each string
            ans = max(recSol(text1, text2, i + 1, j), recSol(text1, text2, i, j + 1));
        }
        return ans;
    }

    // Wrapper function for LCS
    int longestCommonSubsequence(string text1, string text2) {
        return recSol(text1, text2, 0, 0);
    }
};

int main() {
    // Input strings
    string text1, text2;
    
    cout << "Enter the first string: ";
    cin >> text1;
    
    cout << "Enter the second string: ";
    cin >> text2;

    // Solve LCS problem
    Solution solution;
    int result = solution.longestCommonSubsequence(text1, text2);

    // Print result
    cout << "The length of the Longest Common Subsequence is: " << result << endl;

    return 0;
}
