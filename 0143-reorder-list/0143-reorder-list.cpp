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
    void reorderList(ListNode* head) {
        vector<int>arr;
        ListNode* temp=head;
        while(temp!=nullptr){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>brr;
        for(int i=0;i<(arr.size()+1)/2;i++){
            brr.push_back(arr[i]);
            if(i!=arr.size()-1-i)  {brr.push_back(arr[arr.size()-1-i]);}
        }
        ListNode* t=head;
        int i=0;
        int j=brr.size()-1;
        while(t!=nullptr && i<=j){
            t->val=brr[i];
            t=t->next;
            i++;
        }
    }
};