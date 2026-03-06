class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        if(num<=9) return num;
        while(num>9){
            sum=0;
            int n=num;
            while(n>0){
                int r=n%10;
                sum+=r;
                n=n/10;
            }
            num=sum;
        }
        return  sum;
    }
};