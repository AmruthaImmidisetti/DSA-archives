class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(), s1.end());
        if(s1.size() > s2.size()) return false;
        string newS(s2.begin(), s2.begin() + s1.size());
        string str(newS.begin(), newS.end());
        sort(str.begin(), str.end());
        if (s1 == str)
            return true;
        cout<<newS<<" ";
        for (int i = s1.size(); i < s2.size(); i++) {
            newS.erase(0, 1);
            newS += s2[i];
            string str(newS.begin(), newS.end());
            sort(str.begin(), str.end());
            if (s1 == str)
                return true;
        }
        return false;
    }
};