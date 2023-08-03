#include <iostream>
#include <vector>

using namespace std;

class Arith{
    public:
        int value;
    void operator + (Arith obj2){
        int value1 = this->value;//^ this point to obj1 
        int value2 = obj2.value;
        cout << value1+value2 << endl;
    }
};

int main()
{
    Arith obj1 , obj2;
    obj1.value = 44;
    obj2.value = 56;
    obj1+obj2;//^ obj1 treat as -> object which + operator function call

    return 0;
}
