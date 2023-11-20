// class Solution {
// public:
//     void recFloodFill(vector<vector<int>>& image, int sr, int sc,int oldColor, int color){
//         if(sr < 0 || sc < 0 || sr >= image.size() || sr >= image[0].size() || image[sr][sc] != oldColor ){
//             return ;
//         }
//         image[sr][sc]= color;
////! habit of writing if case 
//          recFloodFill(image , sr + 1 , sc , oldColor , color);
//          recFloodFill(image , sr - 1, sc , oldColor , color);
//          recFloodFill(image , sr  , sc + 1, oldColor , color);
//          recFloodFill(image , sr  , sc -1, oldColor , color);
        

//     }
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//         int oldColor = image[sr][sc];
//         if(color == oldColor) return image;
//         recFloodFill(image , sr , sc ,oldColor, color);
//         return image;
//     }
// };