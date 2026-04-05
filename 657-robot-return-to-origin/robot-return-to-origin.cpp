class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(int i = 0;i<moves.length();i++){
            char c = moves[i];
            if(c == 'r' ||c == 'R'){
                x++;
            }
            else if(c == 'l' ||c == 'L'){
                x--;
            }
            else if(c == 'U' ||c == 'u'){
                y++;
            }
            else if(c == 'D' ||c == 'd'){
                y--;
            }
            else{

            }
        }
        return (x==0 && y==0)? true:false;
    }
};