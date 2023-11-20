#include <iostream>
#include <vector>  // vector header file to use vector in our program
using namespace std;
int bs(vector<int> &arr, int key) {
  int start = 0;
  int end = arr.size() - 1;
  int mid = (start + end) / 2;

  while (start <= end) {
    if (arr[mid] == key) {
      return mid;
    } else if (arr[mid] < key) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = (start + end) / 2;
  }

  return -1;
}
int main() {
  vector<int> arr{1, 2, 6, 9, 11};
  int target = 6;
  cout << "present at index: " << bs(arr, target) << endl;

  return 0;
}