#include <iostream>
using namespace std;

void helper(string &str, int s, int e) {
    if (e <= s) {
        return;
    }
    //
    swap(str[s], str[e]);
    //
    helper(str, s + 1, e - 1);
}

string reverseWord(string str) {
    int s = 0;
    int e = str.length() - 1;
    helper(str, s, e);
    return str;
}

int main() {
    string input = "Hello, World!";
    string reversed = reverseWord(input);
    cout << "Original: " << input << endl;
    cout << "Reversed: " << reversed << endl;
    return 0;
}
