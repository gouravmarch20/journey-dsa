#include <iostream>
#include <vector>
//^ destructor self call on static
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
    Animal a;
    a.student = 60;
    // Animal *august = new Animal();

    return 0;
}
