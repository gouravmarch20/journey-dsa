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

    int next(int price)
    {
        int span = 1;
        while (!st.empty() && st.top().first <= price)
        {
            span += st.top().second;
            st.pop();
        }
        st.push({price, span});
        return span;
    }

private:
    stack<pair<int, int>> st;
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
