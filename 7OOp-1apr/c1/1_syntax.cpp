#include <iostream>
#include <vector>

using namespace std;

class Animal{
    int age ;
    int student ;
    char ch;

};
int main()
{
    //H>W : padding , greedy alignment --> why char 4 space in class
    cout << "the size of class " << sizeof(Animal)<<endl;//? 4 + 4 + char(1) but 4 space it consumes 
    return 0;
}
