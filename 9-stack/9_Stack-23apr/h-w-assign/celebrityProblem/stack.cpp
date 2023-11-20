#include <iostream>
#include <vector>
#include <climits>
#include <stack>

using namespace std;

int celebrity(vector<vector<int>> M, int n)
{
    stack<int> st; //^ forgot <int> writing
    for (int i = 0; i < n; i++)
    {
        st.push(i);
    }
    //
    while (st.size() != 1)
    {
        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();
        if (M[a][b])
        {
            // a knew b , celebrity not knew any A is not celebrity , B may be
            st.push(b);
        }
        else
        {
            // a not knew b , so he may be celebrity
            st.push(a);
        }
    }
    // ? verify -> row wise: he not knew any one , col wise : every one knew him
    //^ if verify fail return -1
    int mightBeCelebrity = st.top();
    st.pop();

    for (int i = 0; i < n; i++)
    {
        if (M[mightBeCelebrity][i] != 0)
        {
            return -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (M[i][mightBeCelebrity] == 0 && i != mightBeCelebrity)
        {
            return -1;
        }
    }
    return mightBeCelebrity;
};

int main()
{
    int n = 3;
    vector<vector<int>> arr{{0, 1, 0},
                            {0, 0, 0},
                            {0, 1, 0}};
    celebrity(arr, n);

    return 0;
}
