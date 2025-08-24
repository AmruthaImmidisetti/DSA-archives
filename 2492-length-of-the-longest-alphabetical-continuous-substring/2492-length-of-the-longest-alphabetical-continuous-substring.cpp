class Solution {
public:
    int longestContinuousSubstring(string s) {
        int len=1,maxLen=0;
        for(int i=1 ; i < s.size() ; i++){
            if((s[i-1])-(s[i]) == -1) len++;
            else{
                maxLen=max(maxLen,len);
                len=1;
            }
        }
        maxLen=max(maxLen,len);
        return maxLen;
    }
};