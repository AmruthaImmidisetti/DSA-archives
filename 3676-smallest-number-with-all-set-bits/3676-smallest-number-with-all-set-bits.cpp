class Solution {
public:
    int smallestNumber(int n) {
        for(int i = n;i < pow(2,n); i++){
            string str = std::format("{:b}", i);
            if(count(str.begin(), str.end(), '1') == str.size()) return i;
        }
        return 0;
    }
};