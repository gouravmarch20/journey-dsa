// * O(n)
// & O(n)
#include <iostream>
#include <unordered_map>

using namespace std;  // Add the using namespace directive

int firstRepeated(int arr[], int n) {
  unordered_map<int, int> map;
  for (int i = 0; i < n; i++) {
    // map[arr[i]++]; //M wrong syntax --> key changing
    map[arr[i]]++;//~ it give map key value , add we inc by 1 
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] <<  " -  "<< map[arr[i]] << endl;
    // if (map[arr[i]] > 1) {
    //   return i + 1;
    // }
  }
  return -1;
}

int main() {
  int arr[] = {3, 2, 3, 4, 2};
  int n = sizeof(arr) / sizeof(arr[0]);

  int result = firstRepeated(arr, n);
  if (result != -1) {
    cout << "The first repeated element is at position " << result << endl;
  } else {
    cout << "No repeated elements found." << endl;
  }
  return 0;
}