#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
#include <algorithm>
#include <deque>

using namespace std;

bool findIndex(string s , int i, char target){
    if (i >= s.length())
    {
        return -1;
    }
    if (s[i] == target)
    {
        return i;
    }
    return findIndex(s , i+1 , target);
    
    
};

int main()
{
    string s = "alpha";
    bool ans =  findIndex(s , 0 , 'l');
    cout << "is available-> " << ans << endl;
    return 0;
}
