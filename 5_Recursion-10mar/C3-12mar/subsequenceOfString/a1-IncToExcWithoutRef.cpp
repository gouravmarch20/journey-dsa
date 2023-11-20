#include <iostream>

using namespace std;

void subsequenceOfStr(string str, vector<string> &ans, int index, string temp) {
  if (index == str.size()) {
    if (temp == "") {
      temp = "--";
    }
    cout << temp << endl;

    ans.push_back(temp);
    return;
  }
  // include
  temp.push_back(str[index]);
  subsequenceOfStr(str, ans, index + 1, temp);
  // exclude
  temp.pop_back();
  subsequenceOfStr(str, ans, index + 1, temp);
};

int main() {
  vector<string> ans;
  string temp;
  subsequenceOfStr("abc", ans, 0, temp);

  return 0;
}
