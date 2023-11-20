class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> m1(n, 1); 

       
        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1]) {
                m1[i] = m1[i - 1] + 1;
            }
        }

       
        int sum = m1[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                m1[i] = max(m1[i], m1[i + 1] + 1);
            }
            sum += m1[i];
        }

        return sum;
    }
};