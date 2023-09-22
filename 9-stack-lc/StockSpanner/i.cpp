#include <iostream>
#include <vector>
#include <climits>
#include <stack>

using namespace std;

class StockSpanner
{

public:
    StockSpanner()
    {
        // Constructor
    }

    stack<pair<int, int>> st;

    int next(int price)
    {
        int span = 1;//~ if nothing the 1 will assign , from today we count span
        while (!st.empty() && st.top().first <= price)//! ignore equal to case , place wrong sign >
        {
            span += st.top().second; // M second()
            st.pop();
        }
        st.push({price, span}); //! forgot how to store in pair --> { } missing
        // return st.top().second;//^ can return span directly

        return span;
    }
};

int main()
{
    StockSpanner stockSpanner;
    cout << stockSpanner.next(100) << endl; // Output: 1
    cout << stockSpanner.next(80) << endl;  // Output: 1
    cout << stockSpanner.next(60) << endl;  // Output: 1
    cout << stockSpanner.next(70) << endl;  // Output: 2
    cout << stockSpanner.next(60) << endl;  // Output: 1
    cout << stockSpanner.next(75) << endl;  // Output: 4
    cout << stockSpanner.next(85) << endl;  // Output: 6

    return 0;
}
