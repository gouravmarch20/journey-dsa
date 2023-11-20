// #include <iostream>
// #include <vector>
// #include <climits>
// #include <stack>

// using namespace std;


// class StockSpanner
// {
// public:
//     StockSpanner()
//     {
//         // Constructor
//     }

//     int next(int price)
//     {
//         int span = 1;
//         while (!prices.empty() && prices.top() <= price)
//         {
//             span += spans.top();
//             prices.pop();
//             spans.pop();
//         }
//         prices.push(price);
//         spans.push(span);
//         return span;
//     }

// private:
//     std::stack<int> prices; // Stores the stock prices
//     std::stack<int> spans;  // Stores the corresponding spans
// };

// int main()
// {
//     StockSpanner stockSpanner;
//     cout << stockSpanner.next(100) << endl; // Output: 1
//     cout << stockSpanner.next(80) << endl;  // Output: 1
//     cout << stockSpanner.next(60) << endl;  // Output: 1
//     cout << stockSpanner.next(70) << endl;  // Output: 2
//     cout << stockSpanner.next(60) << endl;  // Output: 1
//     cout << stockSpanner.next(75) << endl;  // Output: 4
//     cout << stockSpanner.next(85) << endl;  // Output: 6

//     return 0;
// }
