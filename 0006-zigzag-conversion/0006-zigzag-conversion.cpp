class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        vector<string>strs(numRows, "");
        int start = 0;
        bool flag;
        for (int i = 0; i < s.size(); i++) {
            if(start == 0) flag = true;
            if(start == numRows - 1) flag = false;

            strs[start] += s[i];

            if(flag) start++;
            else start--;
        }
        string zigzagStr = "";
        for(int i =0; i<strs.size();i++) {
            zigzagStr += strs[i];
        }
        return zigzagStr;
    }
};