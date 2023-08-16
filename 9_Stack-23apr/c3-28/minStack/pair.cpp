#include <iostream>
#include <vector>

using namespace std;

void toHex(){

};

int main()
{
    vector<pair<int, int>> st;
    pair<int, int> s;
    s.first = 4;
    s.second = 4;
    cout << "is pair empty " << st.empty() << endl;
    st.push_back(s);
    cout << "is pair empty " << st.empty() << endl;

    return 0;
}
