class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
        int *k=(int*)malloc(sizeof(int)*(heights.size()));
        for(int i=0;i<heights.size();i++)
        {
          k[i]=heights[i];
        }
        sort(heights.begin(),heights.end());
        int c=0;
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i]!=k[i]) c++;
        }
        return c;
    }
};