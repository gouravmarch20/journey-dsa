#include <algorithm>  // For std::reverse
#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Step 1: Transpose the matrix
        for (int i = 0; i < n; i++) {
            //? to avoid dual swap j = i + 1
            for (int j = i + 1; j < n; j++) {
                cout << matrix[i][j] << " " <<  matrix[j][i] << endl;
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse each row
        // for (int i = 0; i < n; i++) {
        //     reverse(matrix[i].begin(), matrix[i].end());
        // }
    }
};

int main() {
    // Create an instance of the Solution class
    Solution solution;

    // Define a sample square matrix
    vector<vector<int>> matrix = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},

    };

    // Print the original matrix
    cout << "Original Matrix:" << endl;
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    // Rotate the matrix 90 degrees clockwise
    solution.rotateMatrix(matrix);

    // Print the rotated matrix
    cout << "\nRotated Matrix (90 degrees clockwise):" << endl;
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
