// class Solution {
// public:
   
//     bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
//         int xd=abs(fx-sx);
//         int yd=abs(fy-sy);
//         int diagonal=min(xd,yd);
//         xd-=diagonal;
//         yd-=diagonal;
//         diagonal+=(xd+yd);
//         if(diagonal==0)
//         return t!=1;
//         return diagonal<=t;
       
        
//     }
// };