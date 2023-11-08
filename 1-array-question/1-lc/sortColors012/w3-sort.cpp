#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sortColors(vector<int>& arr) {
    sort(arr.begin() , arr.end());

};

int main() {
  vector<int> arr = {2, 1, 0, 1, 0};
  sortColors(arr);
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
