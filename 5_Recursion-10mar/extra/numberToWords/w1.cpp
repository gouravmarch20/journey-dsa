#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::pair<int, std::string>> mp;

    mp.push_back({1000000000, "Billion"});
    mp.push_back({1000000, "Million"});
    mp.push_back({1000, "Thousand"});
    mp.push_back({100, "Hundred"});
    mp.push_back({90, "Ninety"});
    mp.push_back({80, "Eighty"});
    mp.push_back({70, "Seventy"});
    mp.push_back({60, "Sixty"});
    mp.push_back({50, "Fifty"});
    mp.push_back({40, "Forty"});
    mp.push_back({30, "Thirty"});
    mp.push_back({20, "Twenty"});
    mp.push_back({19, "Nineteen"});
    mp.push_back({18, "Eighteen"});
    mp.push_back({17, "Seventeen"});
    mp.push_back({16, "Sixteen"});
    mp.push_back({15, "Fifteen"});
    mp.push_back({14, "Fourteen"});
    mp.push_back({13, "Thirteen"});
    mp.push_back({12, "Twelve"});
    mp.push_back({11, "Eleven"});
    mp.push_back({11, "Eleven"});

    mp.push_back({10, "Ten"});

    for (int i = 9; i >= 1; --i) {
        // std::string a = std::to_string(i);
        // std::cout  << a << std::endl ;

        mp.push_back({i, std::to_string(i)});
    }

    // Printing the contents of the mp vector
    for (const auto& pair : mp) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
