class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        int cr = cbrt(n);
        map<int,int>mp;
        for(int i=1;i<=cr;i++) {
            for(int j=i;j<=cr;j++) {
                int num = (i*i*i) + (j*j*j);
                if(num <= n)  mp[num]++;
            }
        }
        vector<int>arr;
        for(auto ele : mp) {
            if(ele.second >= 2) arr.push_back(ele.first);
        }
        sort(arr.begin(), arr.end());
        return arr;
    }
};