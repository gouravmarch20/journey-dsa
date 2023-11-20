#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int a = 10, b = 20, c = 15, d = 25;

    // Find the maximum of a, b, c, and d
    int max_value = max({a, b, c, d});//L:
    // int max = max(a,b,c);//! not work 
    // int maxi = max(a, max(b,max(c,d)));//L: 


    cout << "The maximum value is: " << max_value << endl;

    return 0;
}
