class Solution {
public:
    int maxVowels(string s, int k) {
        int c=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') c++;
        }

        int mx=c;
        for(int i=k;i<s.size();i++){
            if(s[i-k]=='a' || s[i-k]=='o' || s[i-k]=='i' || s[i-k]=='e' || s[i-k]=='u') c--;
            
            if(s[i]=='a' || s[i]=='o' || s[i]=='i' || s[i]=='e' || s[i]=='u') c++;
    
            mx=max(mx,c);
        }
        return mx;

    }
};