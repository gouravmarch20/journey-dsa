#include <iostream>
using namespace std;
int main()
{
    int arr[7];    // declaration of integer array of 28 bytes space
    int a[53];     // integer array of 53 size
    char ch[106];  // character array of 106 size
    bool arr1[10]; // boolean array of 10 size
    cout << "arr1 size" << sizeof(arr1) << endl;
    int arr2[] = {1, 2, 3, 4, 5}; // initialization of array

    // Taking the input and initializing the array
    int array1[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter array value" << i << " ";
        cin >> array1[i];
    }
    // Printing array values
    for (int i = 0; i < 3; i++)
    { // i is the index
        cout << array1[i] << " ";
    }

    return 0;
}