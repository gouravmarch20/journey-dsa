#include <iostream>
#include <string>

using namespace std;

bool checkPalindrome(string s, int i, int j)
{
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool validPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            // ^ remove 1 char from right || remove 1 char from left ==> atmax deleting at most one character
            return (checkPalindrome(s, i + 1, j) || checkPalindrome(s, i, j - 1));
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

;

int main()
{

    string input = "madam";
    bool isPalindrome = validPalindrome(input);
    if (isPalindrome)
    {
        cout << "The string is a valid palindrome." << endl;
    }
    else
    {
        cout << "The string is not a valid palindrome." << endl;
    }
    
    return 0;
}
