class Solution {
    string reverses(string s){
        reverse(s.begin(),s.end());
        return s;
    }
    string invert(string q){
        for(int i=0;i<q.length();i++){
            if(q[i]=='1') q[i]='0';
            else  q[i]='1';
        }
        return q;
    }
public:
    char findKthBit(int n, int k) {
        string s1="0";
        for(int i=1;i<n;i++){
           string si=s1+'1'+reverses(invert(s1));
           swap(s1,si);
           si.clear();
        }
        cout<<s1;
        return s1[k-1];
    }
};