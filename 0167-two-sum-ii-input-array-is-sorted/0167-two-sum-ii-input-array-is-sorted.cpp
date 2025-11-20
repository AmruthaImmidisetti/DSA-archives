class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int l=0;
       int h=numbers.size()-1;
       while(l<h){
          int total=numbers[l]+numbers[h];
          if(total==target)    return {l+1,h+1};
          else if(total>target)   h-=1;
          else    l+=1;
          }
          return {-1,-1};
       }
};