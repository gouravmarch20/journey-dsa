#include <iostream>
#include <string>
using namespace std;

string reverseOnlyLetters(string s) {
    int l = 0, h = s.length() - 1;
    while (l < h) {
        //NOTE: isalpha()==> cpp inbuilt function return bool if given char is in AtoZ or a_to_z  range 
        if (isalpha(s[l]) && isalpha(s[h])) {
            swap(s[l], s[h]);
            l++, h--;
        } else if (!isalpha(s[l])) {
            l++;
        } else {
            h--;
        }
    }
    return s;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    string result = reverseOnlyLetters(input);
    cout << "Result: " << result << endl;
    return 0;
}
