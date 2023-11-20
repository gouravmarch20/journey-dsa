#include <iostream>
#include <vector>
using namespace std;
void moveNegatives(vector<int> &arr) {
  int l = 0;
  int h = arr.size() - 1;
  while (l <= h) {
    if (arr[l] < 0) {  // Element at correct position
      l++;             // Simply increment l
    } else if (arr[h] > 0) {
      h--;
    } else {
      swap(arr[l], arr[h]);  // Place negative at place of positive element
      l++;
      h--;
    }
  }
}
int main() {
  vector<int> arr{1, -1, 3, 2, -7, -5, 11, 6};
  moveNegatives(arr);
  for (int l = 0; l < arr.size(); l++) {
    cout << arr[l] << " ";
  }
  return 0;
}