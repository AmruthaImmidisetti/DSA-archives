class Solution {
public:
    int getLeastFrequentDigit(int n) {
        string s = to_string(n);
       unordered_map<char,int>mp;
       for(char c:s) mp[c]++;
       int minF=INT_MAX;
       for(const auto pair:mp){
         minF=min(minF,pair.second);
       }
       int ans=INT_MAX;
       for(auto pair:mp){
        if(minF == pair.second){
            ans = min(ans,pair.first-'0');
        }
       }
       return ans;
    }
};