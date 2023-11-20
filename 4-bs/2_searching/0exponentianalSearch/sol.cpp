#include <algorithm>
#include <climits>
#include <deque>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

int bs(vector<int> arr, int s, int e , int x) {
  while (s <= e) {
    int m = s + (e - s) / 2;
    if(arr[m] == x) {
        return m;
    }else if(x < arr[m]){
        e = m -1;
    }else{
        s = m+1;
    }
  }
};
int expSpace(vector<int> arr, int x) {
  if (arr[0] == x) return 0;
  int i = 1;  //^ 0 can not double so form 1 sai start
  int n = arr.size();
  while (i < n && arr[i] < x) {
    i = i << 1;  // i *= 2 || i = i * 2;
  }
  return i;
};

int main() {
  vector<int> arr = {1, 4, 5, 8, 9, 13, 17, 19, 21, 33, 44, 55};
  int x = 13;
  int res = expSpace(arr, x);//& res tak mai he found , res/2 sure start
  bs(arr, res / 2, res , x);//~ search space limit gave

  return 0;
}
