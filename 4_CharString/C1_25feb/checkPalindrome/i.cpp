//* time => O(n)
//* space => O(1)
#include <iostream>
#include <string.h>

using namespace std;
bool checkPalindrome(char word[])
{
    int i = 0;
    int n = strlen(word);
    int j = n - 1;

    while (i <= j)
    {
        if (word[i] != word[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    char sentence[100] = "gitig";

    cout << "checkPalindrome " << checkPalindrome(sentence) << endl;


    return 0;
}