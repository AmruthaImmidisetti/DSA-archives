class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>arr;
        for(int i = 0;i<operations.size();i++){
            if(operations[i] == "+") arr.push_back((arr[arr.size()-1]) + (arr[arr.size()-2]));
            else if(operations[i] == "C") arr.pop_back();
            else if(operations[i] == "D") arr.push_back((arr[arr.size()-1]) * 2);
            else arr.push_back(stoi(operations[i]));
        }
        int sum = accumulate(arr.begin(), arr.end(), 0);
        return sum;
    }
};