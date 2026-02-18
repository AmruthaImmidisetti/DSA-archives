class Solution {
public:
    bool hasAlternatingBits(int n) {
        int t=n;
        string str = "";
        while(t > 0) {
            str += to_string(t%2);
            if(str.size() > 1) {
                if(str[str.size()-1] == str[str.size()-2])  return false;
            }
            t = t/2;
        }
        return true;
    }
};