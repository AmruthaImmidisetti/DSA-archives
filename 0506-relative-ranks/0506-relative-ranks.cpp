class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,string>>arr;
        for(int i=0;i<score.size();i++){
            arr.push({score[i], " "});
        }
        vector<string>str(score.size());
        int rank = 1;
        while(!arr.empty()){
            auto ele = arr.top();
            for(int i=0;i<score.size();i++){
                if(ele.first == score[i]){
                    if(rank == 1)  str[i] = "Gold Medal";
                    else if(rank == 2) str[i] = "Silver Medal";
                    else if (rank == 3) str[i] = "Bronze Medal";
                    else str[i] = to_string(rank);
                    break;
                }
            }
            rank++;
            arr.pop();
        }
        return str;
    }
};