class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x=0, y=0;
        char dir = 'N';
        
        for(char c:instructions){
            if(c=='G'){
                if(dir == 'N')      y++;
                else if(dir == 'E') x++;
                else if(dir == 'W') x--;
                else                y--;
            }else if(c == 'R'){
                if(dir == 'N')      dir = 'E';
                else if(dir == 'E') dir = 'S';
                else if(dir == 'S') dir = 'W';
                else if(dir == 'W') dir = 'N';
            }else{
                if(dir == 'N')      dir = 'W';
                else if(dir == 'W') dir = 'S';
                else if(dir == 'S') dir = 'E';
                else if(dir == 'E') dir = 'N';
            }
        }

        if(x == 0 and y == 0)
            return true;

        if(dir == 'N')
            return false;
        return true;
    }
};