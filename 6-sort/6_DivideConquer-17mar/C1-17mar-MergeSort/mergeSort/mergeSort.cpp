#include <iostream>
#include <vector>

using namespace std;
// void merge2SortedArr(vector<int>& arr, int start, int end) {
//   int mid = (start + end) / 2;
//   //?s1 hit & try formula --> array break then --> left , right array length
//   int lenLeft = mid - start + 1;
//   int lenRight = end - mid;
//   //? s2: copy  left & right array
//   vector<int> left(lenLeft);
//   vector<int> right(lenRight);
//   // copy left array
//   int k = start;
//   for (int i = 0; i < lenLeft; i++) {
//     left[i] = arr[k];
//     k++;
//   }
//   // copy right array
//   k = mid + 1;
//   for (int i = 0; i < lenRight; i++) {
//     right[i] = arr[k];
//     k++;
//   }

//   //? s3:: merge two already sorted  array
//   int leftIndex = 0;
//   int rightIndex = 0;

//   int mainArrayIndex =
//       start;  //! in right array tree --> no one start with 0 ::: left mai
//       all
//               //! with 0 sai start ,  end is same as per given end
//   while (leftIndex < lenLeft && rightIndex < lenRight) {
//     if (arr[leftIndex] < arr[rightIndex]) {
//       arr[mainArrayIndex] = arr[leftIndex];
//       mainArrayIndex++;
//       leftIndex++;
//     } else {
//       arr[mainArrayIndex] = arr[rightIndex];
//       mainArrayIndex++;
//       rightIndex++;
//     }
//     while (leftIndex < lenLeft) {
//       arr[mainArrayIndex] = arr[leftIndex];
//       mainArrayIndex++;
//       leftIndex++;
//     }
//     while (rightIndex < lenRight) {
//       arr[mainArrayIndex] = arr[rightIndex];
//       mainArrayIndex++;
//       rightIndex++;
//     }
//   }
// }

void merge2SortedArr(vector<int>& arr, int start, int mid, int end) {
  //?s1 hit & try formula --> array break then --> left, right array length
  int lenLeft = mid - start + 1;
  int lenRight = end - mid;
  //? s2: copy  left & right array
  vector<int> left(lenLeft);
  vector<int> right(lenRight);
  // copy left array
  int k = start;
  for (int i = 0; i < lenLeft; i++) {
    left[i] = arr[k];
    k++;
  }
  // copy right array
  k = mid + 1;
  for (int i = 0; i < lenRight; i++) {
    right[i] = arr[k];
    k++;
  }
  //^ each time exiting array sorting done start to end index
  //? s3:: merge two already sorted arrays => in 1 sorted array --> current
  //given start to end sort index sorted
  int leftIndex = 0;
  int rightIndex = 0;

  int mainArrayIndex = start;
  while (leftIndex < lenLeft && rightIndex < lenRight) {
    if (left[leftIndex] < right[rightIndex]) {
      arr[mainArrayIndex] = left[leftIndex];
      mainArrayIndex++;
      leftIndex++;
    } else {
      arr[mainArrayIndex] = right[rightIndex];
      mainArrayIndex++;
      rightIndex++;
    }
  }

  // Copy the remaining elements from left and right arrays, if any
  while (leftIndex < lenLeft) {
    arr[mainArrayIndex] = left[leftIndex];
    mainArrayIndex++;
    leftIndex++;
  }

  while (rightIndex < lenRight) {
    arr[mainArrayIndex] = right[rightIndex];
    mainArrayIndex++;
    rightIndex++;
  }
}

void mergeSort(vector<int>& arr, int start, int end) {
  if (start > end) return;
  if (start == end) return;
  int mid = (start + end) / 2;

  mergeSort(arr, start, mid);
  mergeSort(arr, mid + 1, end);
  //
  merge2SortedArr(arr, start, mid, end);  //! forgot what sort 2 array args need
};

int main() {
  vector<int> arr = {2, 1, 9, 7, 4, 6};
  mergeSort(arr, 0, arr.size() - 1);  //! m2:: end is arr.size -1
  for (auto el : arr) {
    cout << el << " ";
  }
  return 0;
}
