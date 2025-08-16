class Solution {
public:
    int maximum69Number (int num) {
        string str=to_string(num);
        for(char &s:str){
            if(s=='6'){s='9';break;}
        }
       int q= stoi(str);
       return q;
    }
};