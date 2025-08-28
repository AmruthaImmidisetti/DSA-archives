class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        // 00 01 02  [1,2,3]  [-1,-2,-3]  [-1,-2,-3]
        // 10 11 12  [5,6,7]  [-3,-3,-2]  [-3,0,-2]
        // 20 21 22  [4,9,8]  [-4,-4,0]   [-4,-4,-3]
        for(int k=0;k<grid.size();k++){
        for(int i=0;i<grid.size()-1;i++){
            for(int j=0;j<grid[i].size()-1;j++){
        if(i<j && grid[i][j]> grid[i+1][j+1]) swap(grid[i][j],grid[i+1][j+1]);
        if(i>=j && grid[i][j]< grid[i+1][j+1]) swap(grid[i][j],grid[i+1][j+1]);
            }
        }
        }
        return grid;
    }
};