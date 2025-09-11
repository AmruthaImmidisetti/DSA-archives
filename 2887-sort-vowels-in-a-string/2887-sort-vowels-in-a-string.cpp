class Solution {
public:
    string sortVowels(string s) {
        vector<char>arr;
        for(int i=0 ; i < s.size() ; i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U'){
                arr.push_back(s[i]);
            }
        }
        sort(arr.begin(), arr.end());
        int k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U'){
                s[i] = arr[k++];
            }
        }
        return s;
    }
};