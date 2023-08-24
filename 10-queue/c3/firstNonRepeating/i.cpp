#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
#include <algorithm>
#include <deque>
#include <unordered_map>

using namespace std;

string firstNonRepeating(string s)
{
    int freqArr[26] = {0}; // NOTE all 0 to 25 index --> we add 0 index
    queue<char> q;
    string ans;
    for (auto ch : s)
    {
        int index = ch - 'a'; // NOTE a-a = 0 , a - d = 3 ==> hence index wise 0 to 25 we can assign a -> 0 index , b -> 1 index

        freqArr[index]++;
        q.push(ch);
        //
        while (!q.empty())
        {
            // ^ repeating char
            if (freqArr[q.front() - 'a'] > 1)
            {
                q.pop();
            }
            // M need to use else if --> if run in both case when upper code run --> q get change below again running
            //^ less than 1 not possible --> q.front all ready added in array
            // if (freqArr[q.front() - 'a'] == 1)
            // {
            //     ans.push_back(q.front());
            //     break;
            // }
            else if (freqArr[q.front() - 'a'] == 1)
            {
                ans.push_back(q.front());
                break;
            }
        }
        if (q.empty())
        {
            ans.push_back('#');
        }
    }

    return ans;
};

int main()
{
    firstNonRepeating("aabc");
    return 0;
}
