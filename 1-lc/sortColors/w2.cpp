#include <iostream>
#include <vector>

using namespace std;

void sortColors(vector<int>& arr) {
  int countZero = 0, countOne = 0, countTwo = 0;

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == 0) {
      countZero++;
    } else if (arr[i] == 1) {
      countOne++;
    } else {
      countTwo++;
    }
  }

  //   //
  int i = 0;
  while (countZero--) {
    arr[i++] = 0;
  }
  while (countOne--) {
    arr[i++] = 1;
  }
  while (countTwo--) {
    arr[i++] = 2;
  }
};

int main() {
  vector<int> arr = {2, 1, 0, 1, 0};
  sortColors(arr);
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
