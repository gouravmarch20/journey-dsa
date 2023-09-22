// class StockSpannerStockSpannerStockSpanner {
// public:
//     // stack <int , int> st;//M1 in syntax
//     stack <pair <int,int>> st;

//     ˇ() {
        
//     }
    
//     int next(int price) {
//         int nG = 1;
//         if(st.empty()){
//           // st.push(price , 1);
//           st.push({price , nG});//^ m2: syntax
//         }else{
//           //^m4: forgot equal to case in ==> st.top().first 
//           while(!st.empty() && st.top().first <= price){
//             // nG++;//M5: top ka sum need to add
//             nG += st.top().second;
//             st.pop();
//           }
//           st.push({price , nG});//^ m3: forgot
//         }
//         return st.top().second;
//     }
// };

// /**
//  * Your StockSpanner object will be instantiated and called as such:
//  * StockSpanner* obj = new StockSpanner();
//  * int param_1 = obj->next(price);
//  */