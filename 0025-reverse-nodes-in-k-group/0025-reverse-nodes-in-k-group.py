# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        cnt = 0
        temp = head
        while temp is not None:
            temp=temp.next
            cnt=cnt+1
        if cnt < k:
            return head

        curr = head
        prev = None
        next = None
        cnt = 0
        while curr and cnt < k:
            next = curr.next
            curr.next = prev
            prev = curr
            curr = next
            cnt=cnt+1
        
        if head is not None:
            head.next = self.reverseKGroup(next, k)

        return prev

