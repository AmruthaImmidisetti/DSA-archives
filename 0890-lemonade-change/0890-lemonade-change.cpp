class Solution {
public:
    bool lemonadeChange(vector<int>& arr) {
        int  sum=0,ten=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==5)  sum=sum+5;
            if(arr[i]==10) 
            {
                sum=sum-5;
                ten=ten+10;   if(sum<0) return false;
            }
            if(arr[i]==20) 
            {
                if(sum==0 || sum<0) return false;
                if(ten<10 && sum<15) return false;
                if(ten==0){
                    sum=sum-15;
                }
                else {
                    sum=sum-5;
                    ten=ten-10;
                }
            }
        }
        return true;
    }
};