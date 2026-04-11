/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapPairs(ListNode head) {
        ListNode prev = null;
        ListNode curr = head;
        ListNode next = null;
        int cnt = 0;
        while(curr  != null && cnt < 2) {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
            cnt++;
        }
        if(head!= null) {
            head.next = swapPairs(curr);
        }
        return prev;
    }
}