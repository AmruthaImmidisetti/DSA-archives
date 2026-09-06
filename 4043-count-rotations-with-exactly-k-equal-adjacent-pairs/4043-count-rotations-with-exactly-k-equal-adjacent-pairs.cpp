class Solution {
public:
    int countRotations(string s, int k) {
        int ans = 0;
        for(int i =0;i<s.size();i++) {
            string newS = s;
            rotate(newS.begin(), newS.begin()+1, newS.end());
            int cnt = 0 ;
            for(int i=0;i<newS.size()-1;i++) {
                if(newS[i] == newS[i+1]) cnt++;
            }
            if(cnt == k) ans++;
            s=newS;
        }
        return ans;
    }
};