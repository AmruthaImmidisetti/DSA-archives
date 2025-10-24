class Solution {
public:
    bool hasSameDigits(string s) {
        string str="";
        while(s.size()!=2){
            str="";
            for (size_t i = 0; i < s.size() - 1; i++) {
            int first = stoi(string(1, s[i])); 
            int second = stoi(string(1, s[i + 1]));
            str += to_string((first + second) % 10);
          }
            s=str;
        }
        return s[0]==s[1];
    }
};