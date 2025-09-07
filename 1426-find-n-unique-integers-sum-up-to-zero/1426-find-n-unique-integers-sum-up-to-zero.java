class Solution {
    public int[] sumZero(int n) {
        // 0 1 2 3 
        // n =  5 - 2;
        // -n*(n+1)/2 ;
        int[] arr = new int[n];
        int i=0;
       if(n == 2) {arr[0] = -1; arr[1] = 1;}
        else{
            while(i<=n-1){
            if(i == n - 1) arr[i]= -(((i-1)*(i))/2);
            else arr[i] = i;
            i++;
            }
        }
        return arr;
    }
}