class Solution {
public:
    int smallestNumber(int n, int t) {
        int pro=1;
        for(int i=n;;i++){
            pro=1;
            int q=i;
            while(q>0){
                int r=q%10;
                pro=pro*r;
                q=q/10;
            }
            if(pro%t==0) return i;
        }
    }
};