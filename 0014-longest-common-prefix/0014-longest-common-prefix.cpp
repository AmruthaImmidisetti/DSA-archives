class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre = strs[0];
        int prefLen = strs[0].length();
        for(int i = 1; i < strs.size(); i++) {
            string curr = strs[i];
            while(prefLen > curr.size() ||  pre != curr.substr(0, prefLen)) {
                prefLen--;
                if(prefLen == 0) return "";
                pre = pre.substr(0, prefLen);
            }
        }
        return pre;
    }
};