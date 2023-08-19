#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>

using namespace std;

void firstNegativeInEveryWindow(vector<int> arr, int n, int k)
{

    deque<int> q;
    //?process first window
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            q.push_back(i); //^ index store in deque -> by index we can tell either it come in current widnow or not
        }
    }
    //? remaining window ko process
    for (int i = k; i < n; i++)
    {
        //^  find answer of window previous --> queue first
        if (!q.empty())
        {
            cout << arr[q.front()] << " ";
        }
        else
        {
            cout << 0 << " ";
        }

        // out of window remove//^ if create condition when to remove from queue
        while (!q.empty() && ((i - q.front()) >= k))
        {
            q.pop_front();
        }
        // insert in window -> if negative
        if (arr[i] < 0)
        {
            q.push_back(i);
        }
    }
    //^  for last  queue first
    if (!q.empty())
    {
        cout << arr[q.front()] << " ";
    }
    else
    {
        cout << 0 << " ";
    }
}

int main()
{
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28};
    int size = arr.size();
    int k = 3;
    firstNegativeInEveryWindow(arr, size, k);

    return 0;
}
