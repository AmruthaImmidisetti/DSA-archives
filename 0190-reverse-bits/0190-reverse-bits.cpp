class Solution {
public:
    int reverseBits(int n) {
        int t = n;
        string str = "";
        while (t > 0) {
            str += (t % 2) ? '1' : '0';
            t = t / 2;
        }
        str += string((32-(int)str.size()), '0');
        int num=0, p=0;
        for (int i = str.size() - 1; i >= 0; i--) {
            if((str[i] - '0')==1) num = num + pow(2,p);
            p++;
        }
        return num;
    }
};