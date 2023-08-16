#include <iostream>
#include <vector>

using namespace std;

class Animal
{

    // default private
    //
public:
    int age;

    int student;
    char ch;
    ~Animal()
    {
        cout << " destructor called " << endl;
    }
};

int main()
{

    Animal *august = new Animal();
    august -> age = 12 ;
    //& manually need to call 
    delete august;

    return 0;
}
