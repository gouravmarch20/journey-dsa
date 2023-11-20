#include <iostream>
#include <string>
using namespace std;

bool isCharacter(char s) {
  s = toupper(s);               // ^ m1 js way wrote -> touppercasde()
  return (s >= 65 && s <= 90);  // M2 forgot 65 means -> A
}

string reverseOnlyLetters(string s) {
  int l = 0;
  int e = s.length() - 1;

  while (l < e) {
    while (l < e && !isCharacter(s[l])) {  // M forgot must  l < e 
                                        
      l++;
    }
    while (l < e && !isCharacter(s[e])) {
      e--;
    }

    if (l < e) {  // NOTE forgot  l < e ---> outside range mai swapping perform
      swap(s[l], s[e]);
      l++;
      e--;
    }
  }
  return s;
}

int main() {
  // string input = "ab-cdEf-ghIj";
  string input = "7_28]";
  //   string input = "3412";
  string result = reverseOnlyLetters(input);
  cout << "Reversed string: " << result << endl;
  return 0;
}
