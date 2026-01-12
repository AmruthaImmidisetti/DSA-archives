class Solution {
public:
    int residuePrefixes(string s) {
        unordered_map<char,int>mp;
        int residue = 0;
        for(int i = 0; i < s.size(); i++){
           mp[s[i]]++;
           if(mp.size() == (i+1)%3) residue++;
        }
        return residue;
    }
};