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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>st(nums.begin(), nums.end());

        ListNode* head2 = new ListNode();
        head2->val = 0;
        head2->next = nullptr;
        ListNode* temp2 = head2;

        ListNode* temp = head;
        while (temp != nullptr) {
            int num = temp->val;
            if (!st.count(num)) {
                temp2->next = temp;
                temp2 = temp2->next;
            }
            temp = temp->next;
        }
        temp2->next = nullptr;
        return head2->next;
    }
};