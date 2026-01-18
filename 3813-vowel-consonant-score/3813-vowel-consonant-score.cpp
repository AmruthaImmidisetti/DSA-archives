class Solution {
public:
    int vowelConsonantScore(string s) {
        int vowels = 0, consonants = 0;
        for (char c : s) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
            else if (c >= 'a' && c <= 'z')
                consonants++;
        }

        return (consonants > 0) ? (vowels / consonants) : 0;
    }
};
