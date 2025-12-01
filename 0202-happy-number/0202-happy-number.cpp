class Solution {
public:
    bool isHappy(int n) {
        while(n>1){    
            int t=n;    
            int sq=0;
            while(t!=0){  
                int r=t%10;
                sq+=r*r;
                t=t/10;
            }
            if((sq>=2 && sq<=9)&& sq!=7) return false;
            ////cout<<"!"<<sq;
            n=sq; 
            cout<<"@"<<n;

        }
        return true;
    }
};