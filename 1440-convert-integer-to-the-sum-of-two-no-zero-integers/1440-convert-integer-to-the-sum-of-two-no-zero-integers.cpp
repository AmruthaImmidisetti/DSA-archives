class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<=n;i++){
            int first = i, second = n - i;
            string firstS = to_string(first), secondS = to_string(second);
            sort(firstS.begin(), firstS.end());
            sort(secondS.begin(), secondS.end());
            cout<<firstS<< "  " <<secondS <<" ";
            if(firstS[0] != '0' && secondS[0] != '0'){
                return {first, second};
            }
        }
        return {-1,-1};
    }
};