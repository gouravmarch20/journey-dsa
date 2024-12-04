// class Solution
// {
// public:
//     int recSol(int start, int end)
//     {
//         if (start == end)
//         {
//             return 0;
//         }
//         if (start > end)
//         {
//             return 0;
//         }
//         int amount = INT_MAX;

//         for (int i = start; i <= end; i++)
//         {

//             amount = min(amount, i + max(recSol(start, i - 1), recSol(i + 1, end)));
//         }
//         return amount;
//     }
//     int getMoneyAmount(int n)
//     {
//         int i = 1;
//         int e = n;
//         return recSol(i, e);
//     }
// };