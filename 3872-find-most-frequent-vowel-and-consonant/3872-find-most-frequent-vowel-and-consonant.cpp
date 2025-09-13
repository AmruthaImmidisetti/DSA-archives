class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> mp;
        for (char charc : s)
            mp[charc]++;
            int maxVowelFreq = 0, maxConstFreq = 0;
        for (auto const pair : mp) {
            if (pair.first == 'a' or pair.first == 'e' or pair.first == 'i' or
                pair.first == 'o' or pair.first == 'u'){
                    maxVowelFreq = max(maxVowelFreq, pair.second);
                }
            else{
                maxConstFreq = max(maxConstFreq, pair.second);
            }
        }
        return maxVowelFreq + maxConstFreq;
    }
};