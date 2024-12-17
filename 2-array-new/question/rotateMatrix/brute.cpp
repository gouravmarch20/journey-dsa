#include <iostream>
#include <vector>
using namespace std;

// Rotate function
vector<vector<int>> rotateMatrix(const vector<vector<int>>& matrix) {
    if (matrix.empty()) return {};
    int n = matrix.size();
    int m = matrix[0].size();
    //! m1:: syntax issue , new res array size opposite

    //? vector<vector<int> > res(n , (m , 0)) ...  vector<vector<int>> res(n, vector<int>(m, 0));
    
    vector<vector<int>> res(m, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            res[j][n - i - 1] = matrix[i][j];
        }
    }
    //? if in place 
        // for(int i = 0; i < rotated.size(); i++){
        //     for(int j = 0; j < rotated[0].size(); j++){
        //         matrix[i][j] = rotated[i][j];
        //     }
        // }
    return res;
}

// Helper function to print the matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    vector<vector<int>> rotated = rotateMatrix(matrix);

    cout << "\nRotated Matrix (90 degrees clockwise):" << endl;
    printMatrix(rotated);

    return 0;
}
