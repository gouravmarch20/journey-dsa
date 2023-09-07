#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> arr, int n, int i) {
  // base case
  if (i >= n) {
    return;
  }

  // 1 case solve
  cout << arr[i] << "->";
  // baaki recursion sambhal lega
  printArr(arr, n, i + 1);
}

// void printArrW(int arr[], int n) {
//   // base case
//   if (n == 0) {
//     return;
//   }

//   // 1 case solve krdia
//   cout << arr[0] << " ";
//   // baaki recursion sambhal lega
//   printArrW(arr + 1, n - 1);//^ changing array asize
// }

int main() {
  vector<int> arr{10, 20, 30, 40, 50};
    int arrW[5] = {10, 20, 30, 40, 50};
  int i = 0;
//   printArrW(arrW, 5);
//   printArr(arr, arr.size(), i);

  return 0;
}