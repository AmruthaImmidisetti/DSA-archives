/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
    //     3  3
    //     2  0
    //     0  2
    //    -4 -4
    //    3 2 0 -4 2 0 -4 2 0 -4 2 0 -4
       ListNode slow = head;
       ListNode fast = head;
       while(fast!=null && fast.next!=null){
        slow = slow.next;
        fast = fast.next.next;
        if(slow == fast){
            return true;
        }
       }
       return false;
    }
}