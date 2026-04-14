/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int data = 0;
            data += carry;
            if (l1 != nullptr) {
                data = data + l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                data = data + l2->val;
                l2 = l2->next;
            }
            carry = data / 10;
            tail->next = new ListNode(data % 10);
            tail = tail->next;
        }
        return dummy->next;
    }
};