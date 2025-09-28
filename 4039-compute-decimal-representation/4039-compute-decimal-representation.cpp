class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>arr;
        int len = floor(log10(n)) + 1;
        string ans = to_string(n);
        for(int i=0;i<ans.size();i++){
            if(ans[i]!='0') arr.push_back((ans[i]-'0')*(pow(10 , len - 1)));
            len--;
        }
        return arr;
    }
};