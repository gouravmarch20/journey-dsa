//* time : O(n)
//* space : O(n)
#include <iostream>
#include <string.h>

using namespace std;
int getLength(char name[])
{
    int length = 0;
    int i = 0;

    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

void convertIntoUpperCase(char arr[])
{
    int n = getLength(arr);

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] - 'a' + 'A';//97 - a + A => 97 - 97 + 65 => 65 (A) 
    }
}

int main()
{
    char arr[100] = "babbar";
    convertIntoUpperCase(arr);
    cout << arr << endl;

    return 0;
}