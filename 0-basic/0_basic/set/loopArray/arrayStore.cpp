#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    // Define an array of sets
    set<int> arr[] = {{1, 2}, {1, 9}};

    // Create a vector of vectors to store the result
    vector<vector<int>> res;

    // Convert each set to a vector and store in res
    for ( auto s : arr) {
        vector<int> temp(s.begin(), s.end()); // Convert set to vector
        res.push_back(temp); // Add the vector to the result
    }

    // Print the result
    for (const auto& vec : res) {
        for (int val : vec) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
