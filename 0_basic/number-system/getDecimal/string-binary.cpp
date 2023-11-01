#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int binaryStringToDecimal(const string& binaryStr) {
    int decimalNo = 0;
    int base = 1;

    for (int i = binaryStr.size() - 1; i >= 0; i--) {
        if (binaryStr[i] == '1') {
            decimalNo += base;
        }
        base *= 2;
    }

    return decimalNo;
}

int main() {
    string binaryStr = "1101"; // Replace with your binary string
    int decimalValue = binaryStringToDecimal(binaryStr);
    cout << decimalValue << endl;

    return 0;
}
