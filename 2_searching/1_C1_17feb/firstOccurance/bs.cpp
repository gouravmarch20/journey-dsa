#include <iostream>
#include <vector>  // vector header file to use vector in our program
using namespace std;
int bs(vector<int> &arr, int key) {
  int s = 0;
  int e = arr.size() - 1;
  int m = (s + e) / 2;
  int firstOccIndex = -1;

  while (s <= e) {
    if (arr[m] == key) {
      firstOccIndex = m;
      e = m - 1;
    } else if (arr[m] < key) {
      s = m + 1;
    } else {
      e = m - 1;
    }
    m = (s + e) / 2;
  }

  return firstOccIndex;
}
int main() {
  vector<int> arr{1, 11, 11, 11, 33, 33};
  int target = 11;
  cout << "present at index " << bs(arr, target) << endl;

  return 0;
}