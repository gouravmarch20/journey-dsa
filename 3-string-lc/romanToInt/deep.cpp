#include <iostream>
#include <vector>

using namespace std;

void test(string str) {
  if (str == "") {//NOTE if case only have --> bool type expression 
    cout << "kit " << endl;
  }
};

int main() {
  string str = "";
  test(str);
  return 0;
}
