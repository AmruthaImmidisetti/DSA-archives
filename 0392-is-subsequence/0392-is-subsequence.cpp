class Solution {
public:
    bool isSubsequence(string s, string t) {
        vector<int>ans;
        int ind=0;
        int f=0;
        for(int i=0;i<s.size();i++){
            f=0;
            for(int j=ind;j<t.size();j++){
                if(s[i]==t[j]) {
                    ans.push_back(j);
                    f=1;
                    ind=j+1;
                    break;
                }
            }
            // cout<<ind<<" ";
            if(f==0) return false;
        }
        // for(int ele:ans) cout<<ele<<" ";
        return is_sorted(ans.begin(),ans.end()) && (s.size()==ans.size());
    }
};