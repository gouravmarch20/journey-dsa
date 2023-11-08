#include <iostream>
#include <vector>

using namespace std;

void test(vector<int> arr, string str) {
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i + 1] << endl;  // NOTE if not found 0 return
  }
  cout << "--- string " << endl;

  for (int i = 0; i < str.size(); i++) {
    string a = str[i + 1] ? " " : " not found ";
    cout << a ;

    cout << "string " << str[i + 1] << endl;  // NOTE if not found return empty string falsy statement
  }
};

int main() {
  vector<int> arr = {1, 2, 3, 4};

  string str = "abcd";
  test(arr, str);
  return 0;
}
