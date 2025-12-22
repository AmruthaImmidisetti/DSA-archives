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
    ListNode* newL1=nullptr;
    ListNode* t1=nullptr;
    ListNode* newL2=nullptr;
    ListNode* t2=nullptr;
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return head;
        ListNode* temp=head;
        int c=1;
        while(temp!=nullptr){
            if(c%2!=0){
                if(newL1==nullptr){newL1=new ListNode(temp->val);t1=newL1;}
                else {t1->next = new ListNode(temp->val);t1=t1->next;}
            }
            else{
                if(newL2==nullptr){newL2=new ListNode(temp->val);t2=newL2;}
                else {t2->next = new ListNode(temp->val);t2=t2->next;}
            }
            temp=temp->next;
            c+=1;
        }
        t1->next=newL2;
        return newL1;
    }
};