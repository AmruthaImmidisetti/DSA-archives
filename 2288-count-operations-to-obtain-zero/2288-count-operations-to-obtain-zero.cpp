class Solution {
public:
    int countOperations(int num1, int num2) {
        int t1 = num1, t2 = num2;
        int cnt = 0;
        while(t1 != 0 and t2 != 0){
            if(t1 > t2) t1 = t1 - t2;
            else t2 = t2 - t1;
            cnt++;
        }
        return cnt;
    }
};