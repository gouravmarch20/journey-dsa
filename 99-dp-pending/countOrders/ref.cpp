
//Count All Valid Pickup and Delivery Options

class Solution {
public:
    int countOrders(int n) {

        long long res=1;
        int mod=1e9+7;

        for( int i{2};i<=n;i++){
            res=(res* (i*(2*i-1)))%mod;
        }

        return (int)res;
        
    }
};


// 1-1
// 2-6
// 3-90
// 4-2520
// 5-113400
// 6-7484400
// 7-681080400
// 8-729647433
