class Solution {
    public List<List<Integer>> minimumAbsDifference(int[] arr) {
        List<List<Integer>> nums = new ArrayList<>();
        int mini = Integer.MAX_VALUE;
        Arrays.sort(arr);
        for (int i = 1; i < arr.length; i++) {
            if(mini > arr[i] - arr[i-1]){
                mini = Math.min(mini, arr[i] - arr[i-1]);
                nums.clear();
            }
            if(mini == arr[i] - arr[i-1]){
                nums.add(Arrays.asList(arr[i-1], arr[i]));
            }
        }
        return nums;
    }
}