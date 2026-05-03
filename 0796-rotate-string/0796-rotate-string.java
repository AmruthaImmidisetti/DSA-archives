class Solution {
    public boolean rotateString(String s, String goal) {
        if(s.length()!=goal.length()) return false;
        String q=s+s;
        int ind=q.indexOf(goal);
        return ind>=0;
    }
}