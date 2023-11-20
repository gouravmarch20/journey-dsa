#include <iostream>
#include <vector>
using namespace std;

int bsRec(vector<int> &arr, int target, int s, int e) {
  // base case
  if (s > e) return -1;
  int m = (s + e) / 2;
  // 1 case solve krdo
  if (arr[m] == target) {
    return m;
  } else if (arr[m] > target) {
    return bsRec(arr, target, m, e - 1);
  } else {
    return bsRec(arr, target, m + 1, e);
  }
}

int main() {
  vector<int> arr{4, 9, 33, 77, 109, 222, 444};
  int s = 0;
  int target = 222;
  int e = arr.size() - 1;

  cout << bsRec(arr, target, s, e) << endl;

  return 0;
}