class Solution {
    // bool check(string e,int k){
    //     map<char,int>frq;
    //     for(int i=0;i<e.length();i++){
    //         frq[e[i]]++;
    //         if(frq[e[i]] >= k)  return true;
    //     }
    //     return false;
    // }
    // string q=s.substr(i,j);
    //             if(q.length()>=k){
    //                 if(check(q,k)) c+=1;
    //     
    bool check(unordered_map<char, int>& frq, int k) {
        for (auto& it : frq) {
            if (it.second >= k) return true;
        }
        return false;
        
    }
public:
    int numberOfSubstrings(string s, int k) {
    //     int c=0;
    //     for(int i=0;i<s.length();i++){
    //         map<char,int>frq;
    //         for(int j=1;j<=s.length();j++){
    //             frq[s[j]]++;
    //             if(frq[s[i]] >= k) c+=1;
    //         }
    //     }
    //     return c;
    // }
    int c = 0; 
        int n = s.length();
        for (int i = 0; i < n; i++) {
            unordered_map<char, int> frq; 
            for (int j = i; j < n; j++) {
                frq[s[j]]++; 
                if (check(frq, k)) {
                    c += (n - j); 
                    break;
                }
            }
        }
        return c;
    }
};