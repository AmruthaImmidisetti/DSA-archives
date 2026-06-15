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
    ListNode* deleteMiddle(ListNode* head)
    {
        ListNode *rabit=head;
        ListNode *tortise=head;
        ListNode *temp=head;
        while(head->next==NULL)
        {
            head=NULL;
            return head;
        }
        while(rabit!=NULL && rabit->next!=NULL)
        {
            rabit=rabit->next->next;
            tortise=tortise->next;
        }
        while(temp->next!=tortise)
        {
           temp=temp->next;
        }
        temp->next=tortise->next;
        return head;
    }
};