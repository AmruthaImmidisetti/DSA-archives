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
    public ListNode reverseBetween(ListNode head, int left, int right) {
        if(left == right) return head;
        ListNode leftLL = head;
        ListNode temp = null;
        for (int i = 1; i < left && head != null; i++) {
            temp = head;
            head = head.next;
        }
        ListNode rightLL = head;
        int reqPart = right - left + 1; 

        ListNode prev = null;
        ListNode curr = rightLL;
        ListNode next = null;
        int cnt = 0;
        while(curr != null && cnt < reqPart) {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
            cnt++;
        }
        if(rightLL != null) {
            rightLL.next = curr;
        }
        if(left == 1) return prev;
        temp.next = prev;
        return leftLL;
    }
}