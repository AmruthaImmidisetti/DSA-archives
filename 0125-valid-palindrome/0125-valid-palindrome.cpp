class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>wanted;
        for(char &c:s){
            if(c>='A' && c<='Z'){
                c=c+32;
            }
            if((c>='a' && c<='z')||(c>='0' && c<='9')){
                wanted.push_back(c);
            }
        }
        vector<char>check=wanted;
       reverse(wanted.begin(),wanted.end());
        return wanted==check;
    }
};