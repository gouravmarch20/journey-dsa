#include <iostream>
#include <vector>

using namespace std;
void printUtil(vector<int> arr, int s, int e) {
  if (e  == arr.size()) {//^ m1 : used < sign 
    return;
  }

  for (int i = s; i <= e; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;
  printUtil(arr, s, e + 1);
}
void printSubArr(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++)
    {

        printUtil(arr , i , i);
    }
    
};

int main() {
  vector<int> arr = {1, 2, 3, 4, 5};
  int s = 0;
  int e = 0;
  printSubArr(arr);
  return 0;
}
