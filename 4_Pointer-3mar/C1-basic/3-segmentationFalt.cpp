#include <iostream>
#include <vector>

using namespace std;
int main()
{
   int *ptr;
   cout << ptr <<endl;
   cout << *ptr <<endl;//^ segmentation fault : memory not exits or outside allowed space of this program

    return 0;
}