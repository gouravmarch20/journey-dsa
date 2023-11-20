#include <iostream>
#include <vector>

using namespace std;

void upperCase(string& s) {
  for (int i = 0; i < s.size(); i++) {//^ avoid number capital to change
    if (s[i] >= 97 && s[i] <= 'z') {
        // s[i] = s[i] + 'A' - 'a';//? way1 ::: pure method
        s[i] = s[i] - 32 ;//? way2 ::: diff
        }
  }
};

int main() {
  string s = "hello 998 Orochimaru series to STRing ";
  upperCase(s);
  for (auto ch : s) {
    cout << ch ;
  }
  return 0;
}
