class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries,
                                vector<string>& dictionary) {
        vector<string> arr;
        for (int i = 0; i < queries.size(); i++) {
            string que = queries[i];
            for (int j = 0; j < dictionary.size(); j++) {
                int cnt = 0;
                string dict = dictionary[j];
                for (int k = 0; k < que.size(); k++) {
                    if (que[k] != dict[k])
                        cnt++;
                }
                if (cnt <= 2) {
                    arr.push_back(que);
                    break;
                }
            }
        }
        return arr;
    }
};