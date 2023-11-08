
#include <iostream>
#include <vector>

using namespace std;
bool bs(vector<int> &arr, int key) {
  int s = 0;
  int e = arr.size() - 1;
  int m = (s + e) / 2;

  while (s <= e) {
    if (arr[m] == key) {
      return m;
    } else if (arr[m] < key) {
      s = m + 1;
    } else {
      e = m - 1;
    }
    m = (s + e) / 2;
  }

  return -1;
}
int main() {
  vector<int> sortedArr{1, 2, 6, 9, 11};

  if (binary_search(sortedArr.begin(), sortedArr.end(), 1)) {
    cout << "The element  found" << endl;
  } else {
    cout << "The element is not found" << endl;
  }

  //
  int arr[] = {1, 3, 5, 8};
  int size = 4;
  if (binary_search(arr, arr + size, 0)) {
    cout << "The element  found" << endl;
  } else {
    cout << "The element is not found" << endl;
  }
  return 0;
}