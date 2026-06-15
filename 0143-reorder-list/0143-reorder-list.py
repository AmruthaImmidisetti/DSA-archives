# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        slow = head
        fast = head.next
        while fast != None and fast.next != None:
            slow = slow.next
            fast = fast.next.next

        second = slow.next
        slow.next = None
        first = head

        prev = None
        nxt = None
        curr = second
        while curr:
            nxt = curr.next
            curr.next = prev
            prev = curr
            curr = nxt
        

        while first and prev:
            temp1 = first.next
            temp2 = prev.next
           
            first.next = prev
            if temp1 is None:
                break
            prev.next = temp1

            first = temp1
            prev = temp2
        
