#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    // Define a set of vectors
    std::set<std::vector<int>> setOfVectors;

    // Add vectors to the set
    setOfVectors.insert({1, 2, 3});
    setOfVectors.insert({4, 5, 6});
    setOfVectors.insert({1, 2, 3}); // Duplicate, won't be added

    // Iterate and print the vectors
    for (const auto& vec : setOfVectors) {
        for (int num : vec) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}