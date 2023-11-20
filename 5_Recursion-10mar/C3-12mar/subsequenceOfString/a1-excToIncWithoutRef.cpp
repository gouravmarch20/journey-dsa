#include <iostream>
#include <vector>
using namespace std;

void printSubString(string s, string temp, int i) {
  if (i == s.length()) {
    if(temp == "") temp = "--";
    cout << temp << endl;
    return;
  }
  // exclude
  printSubString(s, temp, i + 1);
  // include
  //? add ::::>> + operator ||  temp.push_back(s[i]);
  temp = temp + s[i];
  printSubString(s, temp, i + 1);
}

int main() {
  string s = "abc";
  string temp = "";
  int i = 0;
  printSubString(s, temp, i);
  return 0;
}