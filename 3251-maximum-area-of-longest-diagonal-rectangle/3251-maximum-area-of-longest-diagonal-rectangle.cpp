class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxiA=0;
        double maxiD=0;
        for(int i=0;i<dimensions.size();i++){
    double sqr=sqrt((dimensions[i][0]*dimensions[i][0])+(dimensions[i][1]*dimensions[i][1]));
         if(sqr>maxiD){
            maxiA=dimensions[i][0] * dimensions[i][1];
            maxiD=max(sqr,maxiD);
         }
         else if(sqr==maxiD){
            maxiA=max(maxiA,dimensions[i][0] * dimensions[i][1]);
         }
        }
        return maxiA;
    }
};