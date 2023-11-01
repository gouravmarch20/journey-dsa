#include <iostream>

using namespace std;

void toHex(){

};

int main() {
  int a = 5;
  int & b = a;
  b = 10;
  cout << a << endl;
  return 0;
}
