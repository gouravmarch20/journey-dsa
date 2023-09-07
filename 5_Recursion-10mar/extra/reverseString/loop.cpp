#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
#include <algorithm>
#include <deque>

using namespace std;

void revStr(string str){
    int s = 0;
    int e = str.length() -1 ;
    for (int i = 0; s < e; i++)
    {
        swap(str[s] , str[e]);
    }
    
    
};

int main()
{
    string str = "gourav";
    revStr(str);
    return 0;
}
