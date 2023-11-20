#include <iostream>
#include <vector>

using namespace std;

int main() {
  string s1 = "hel";

    s1.push_back('l');
    s1.push_back('o');
    // s1.push_back("uv");//! only char
    cout << s1 << endl;
    s1.pop_back();
    cout << s1 << endl;


  return 0;
}
