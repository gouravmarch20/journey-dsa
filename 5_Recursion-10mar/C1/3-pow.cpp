#include <iostream>
#include <vector>


using namespace std;

int powerOf(int no , int pow){
    if(pow == 0) return 1;
    int res = powerOf(no , pow-1);
    return no * res;
}

int main()
{
    cout << "the res " <<powerOf(2 , 5)<<endl;
    cout << "the res " <<powerOf(3 , 4)<<endl;
    return 0;
}
