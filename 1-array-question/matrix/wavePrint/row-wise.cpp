#include <iostream>
#include <vector>

using namespace std;

void wavePrint(vector<vector<int>> arr) {
  int n = arr.size();
  int m = arr[0].size();  //^ row will take col no of items -->
      // M row =  m written

  for (int row = 0; row < n; row++) {
    // odd : left to right
    if (row & 1) {
      // M col = n write need to write m
      for (int col = m - 1; col >= 0; col--) {
        cout << arr[row][col] << " ";
      }
    } else {  // even top to bottom
    for (int col = 0; col < m; col++) {
      cout << arr[row][col] << "  ";
    }
    }
    cout << endl;
  }
};

int main() {
  vector<vector<int>> arr = {
      {1, 2, 3, 4},
    //   {5, 6, 7, 8},
    //   {9, 10, 11, 12},
  };
  wavePrint(arr);
  return 0;
}
