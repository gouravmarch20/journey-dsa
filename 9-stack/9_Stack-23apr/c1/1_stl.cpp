#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    // creation
    stack<int> st;
    // insert
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    //
    st.pop();
    //
    cout << "the element on top is " << st.top() << endl;
    //
    cout << "the size of stack " << st.size() << endl;
    //
    if (st.empty())
    {
        cout << "the stack is empty" << endl;
    }
    else
    {
        cout << "the stack is not empty " << endl;
    }
    while (!st.empty())
    {
        int item = st.top();
        st.pop();

        std::cout << "Popped: " << item << std::endl;

        std::cout << "Stack after popping:" << std::endl;
        std::stack<int> tempStack = st; // Create a temporary stack to display the elements
        while (!tempStack.empty())
        {
            std::cout << tempStack.top() << " ";
            tempStack.pop();
        }
        std::cout << std::endl;
    }

    return 0;
}
