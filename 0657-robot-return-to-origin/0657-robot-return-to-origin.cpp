class Solution {
public:
    bool judgeCircle(string moves) {
        int u=0,d=0,l=0,r=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i] == 'U')  u++;
            else if(moves[i] == 'D') u--;
            else if(moves[i] == 'L') l++;
            else if(moves[i] == 'R') l--;
        }
        if(u==0 and l==0)  return true;
        else return false;
    }
};