class Solution {
public:
    string largestGoodInteger(string num) {
        int maxi=INT_MIN;
        string neww="";
        for(int i=0;i<num.size()-2;i++){
            string str=num.substr(i,3);
            set<char>st(str.begin(),str.end());
            if(st.size() == 1 and stoi(str) > maxi ) {
                int n = stoi(str);
                maxi = max(maxi, n);
                neww=str;
            }
        }
        return neww;
    }
};