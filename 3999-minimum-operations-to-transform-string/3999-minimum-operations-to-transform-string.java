class Solution {
    public int minOperations(String s) {
        s = s.replace("a", "");
        char[] arr = s.toCharArray();
        Arrays.sort(arr);
        return (arr.length != 0)?26 - ((int)arr[0] - 97):0;
    }
}