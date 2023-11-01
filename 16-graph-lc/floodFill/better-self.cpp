//    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor  ,int color ){
//         int n = image.size();
//         int m = image[0].size();
//         if(sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() || image[sr][sc] != color ){
//             return ;
//         }
//         //! M direction move though 2 loop 
//         // for(int i = sr ; i < n ; i++){
//         //     for(int j = sc ; j < m ; j++){
//         //       int oldColor = image[i][j];
//         //         if(image[i][j] == color){
//         //             dfs(image , sr , sc , newColor , oldColor , color);
//         //         }
//         //     }
    
//          if(image[sr][sc] == color){
//              image[sr][sc]  = newColor ;
//               dfs(image , sr+ 1 , sc , newColor  , color);
//               dfs(image , sr- 1, sc , newColor  , color);
//               dfs(image , sr , sc + 1, newColor  , color);
//               dfs(image , sr , sc - 1 , newColor , color);
//           }
        
//     }
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
//         // Code here 
//         int color = image[sr][sc];
//         int n = image.size();
//         int m = image[0].size();
//         if(color == newColor ){
//             return image;
//         }
//         //! M only sorce node connected same color change  => so not for loop
        
//         // for(int i = 0 ; i < n ; i++){
//         //     for(int j = 0 ; j < m ; j++){
//         //       int oldColor = image[i][j];
//         //         if(image[i][j] == color){
//         dfs(image , sr , sc , newColor , color);
//                 // }
//             // }
//         // }
//         return image;
//     }