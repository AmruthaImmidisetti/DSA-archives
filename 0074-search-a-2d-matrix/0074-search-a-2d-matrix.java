class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int low = 0;
        int m= matrix.length,n= matrix[0].length;
        int high = m*n - 1;
        while(low <= high){
            int mid = (low + high)/2;
            int row = mid/n, col = mid%n;
            if(target == matrix[row][col]) return true;
            else if(target < matrix[row][col])   high = mid - 1;
            else if(target > matrix[row][col])  low = mid + 1;
        }
        return false;
    }
}