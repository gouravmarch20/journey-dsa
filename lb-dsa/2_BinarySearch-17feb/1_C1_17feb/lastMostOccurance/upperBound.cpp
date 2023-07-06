// lower_bound/upper_bound example
#include <iostream>  // std::cout
#include <algorithm> // std::lower_bound, std::upper_bound, std::sort
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{1, 11, 11, 11, 33, 33};

    sort(arr.begin(), arr.end());
    // vector<int>::iterator ans;
    auto ans = upper_bound(arr.begin(), arr.end(), 11);
    cout << "ans is " << ans - arr.begin() << endl; //^ doubt

    return 0;
}