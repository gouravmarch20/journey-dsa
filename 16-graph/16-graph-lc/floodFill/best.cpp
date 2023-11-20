// class Solution {
// public:
//     bool isValid(vector<vector<int>>& image, int sr, int sc,int m , int n ,
//     int oldColor ){
//         if( sr < m && sc < n && sr >= 0 && sc >= 0 && image[sr][sc] ==
//         oldColor ){
//             return true;
//         }
//         return false;
//     }
//     void recFloodFill(vector<vector<int>>& image, int sr, int sc,int m , int
//     n, int color , int oldColor){
//         image[sr][sc] = color;
//         if(isValid(image , sr + 1 , sc ,m , n , oldColor)){
//             recFloodFill(image , sr + 1 , sc ,m,n, color , oldColor);
//         }
//         if(isValid(image , sr - 1 , sc  ,m , n , oldColor)){
//             recFloodFill(image , sr - 1 , sc , m , n ,color, oldColor);
//         }
//         if(isValid(image , sr  , sc + 1  , m , n  ,oldColor)){
//             recFloodFill(image , sr , sc + 1,m , n , color , oldColor);
//         }
//         if(isValid(image , sr  , sc - 1  , m , n , oldColor)){
//             recFloodFill(image , sr , sc - 1,m , n, color , oldColor);
//         }
//     }
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
//     int color) {
//         int m = image.size();
//         int n = image[0].size();
//         int oldColor = image[sr][sc];//^ save to find color 4 direction
////*L: if same color , ko replace infinite Recursion --> same color run again
////! AddressSanitizer:DEADLYSIGNAL ==> isValid can't diff if same color replace
////!all replaced color run again so handle this before || visited array

//         if(oldColor == color){
//             return image;
//         }
//         recFloodFill(image , sr , sc ,m , n ,color , oldColor);
//         return image;
//     }
// };