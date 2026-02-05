class Solution {
    public int[] constructTransformedArray(int[] nums) {
         int a = nums.length;
        int[] lst = new int[a];

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > 0) {
                int q = (i + nums[i]) % a;
                lst[i] = nums[q];
            } else if (nums[i] < 0) {
                int q = (i - Math.abs(nums[i])) % a;
                if (q < 0) {
                    q += a;
                }
                lst[i] = nums[q];
            } else {
                lst[i] = 0;
            }
        }

        return lst;
    }
}