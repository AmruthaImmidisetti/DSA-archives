class Solution {
    public int minOperations(int[] nums) {
        Set<Integer>set = Arrays.stream(nums).boxed().collect(Collectors.toSet()); 
        // for(int ele : nums) set.add(ele);  directly converts the value to int → Integer
        if(set.size() == 1) return 0;
        else return 1;
    }
}