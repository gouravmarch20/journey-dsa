#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
    
               if (matrix.empty() || matrix[0].empty()) return {};
            //!m1 : wrong initialization
            // int sr , sc = 0;
             int sr = 0, sc = 0;
             int ec = matrix[0].size() - 1 ;
            int er = matrix.size() - 1 ;
            vector<int> res; 
     
    
            while(sr <= er &&  sc <= ec ){
                //upper test so
                for(int i = sc ; i <= ec ; i++ ){
                    res.push_back(matrix[sr][i]);
                }
                sr++;
                for(int i = sr ; i <= er ; i++ ){
                    res.push_back(matrix[i][ec]);
                }
                ec--;
                //!m2 => sr++ already if in range then only -> avoid same row above || cross range
                 if (sr <= er) {
                for(int i = ec ; i >= sc ; i--){
                    res.push_back(matrix[er][i]);
                }
                 }
                er--;
                //!m3 => sc++ already if in range then only :: avoid same col  || cross range
                if (sc <= ec) {
                for(int i = er ; i >= sr ; i--){
                    res.push_back(matrix[i][sc]);
                }
                }
                sc++;
    
            }
            return res;
        }
    };