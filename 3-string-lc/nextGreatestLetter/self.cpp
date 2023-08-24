#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
#include <algorithm>
#include <deque>

using namespace std;
char nextGreatestLetter(vector<char> &letters, char target)
{

    char ans = letters[0];

    for (int i = 0; i < letters.size(); i++)
    {
        if (target <= letters[i])//^ M2 char 1st mai also next greater  
        {
            // cout << letters[i] << endl;
            // char ansTemp = letters[i] - 'a';
            // cout <<  ansTemp << "--result--" << endl;
            if (ans < letters[i]) // M 'a' miss
            {

                ans = letters[i]; // M for -a
                break;//^ M3 : avoid further if both case match
            }
        }
    }
    // cout << ans << endl;
    return ans ;
}

int main()
{
    vector<char> letters = {'c', 'f', 'z'};
    char target = 'c';
    nextGreatestLetter(letters, target);

    return 0;
}
