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
    int pairSum(ListNode* head) {
        vector<int>arr;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != nullptr && fast->next != nullptr) {
            arr.push_back(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }
        int ans = INT_MIN, start = arr.size() - 1;
        while(slow != nullptr) {
            int res = arr[start--] + (slow->val);
            ans = max(ans, res);
            slow = slow->next;
        }
        return ans;
    }
};