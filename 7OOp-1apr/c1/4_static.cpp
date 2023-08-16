#include <iostream>
#include <vector>

using namespace std;

class Animal
{
    // default private
    int age;
    //
public:
    int student;
    char ch;
    // ? getter for private / public datatype access / modify
    int getAge()
    {
        return age;
    }
    int setAge(int newAge)
    {
        age = newAge;
        return age;
    }
};

int main()
{
    Animal ramesh;
    // ramesh.age = 5;//^ can modify/ access private
    ramesh.student = 40;
    cout << "total student is " << ramesh.student << endl;

    // ^ private data 
    ramesh.setAge(55);// set
    cout << "ramesh age " << ramesh.getAge() << endl;//get 

    return 0;
}
