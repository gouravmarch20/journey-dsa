#include <iostream>
#include <vector>

using namespace std;

void wavePrint(vector<vector<int>> arr) {
  int n = arr.size();
  int m = arr[0].size();

  for (int col = 0; col < m; col++) {
    //odd : bottom to top
    if (col & 1) {
      // M row = n ==> forgot to add -1
      for (int row = n - 1; row >= 0; row--) {
        cout << arr[row][col] << " ";
      }
    } else {//even top to bottom
      for (int row = 0; row < n; row++) {
        cout << arr[row][col] << "  ";
      }
    }
    cout << endl;
  }
};

int main() {
  vector<vector<int>> arr = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
  };
  wavePrint(arr);
  return 0;
}
