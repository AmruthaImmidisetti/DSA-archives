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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<tuple<int, int, ListNode*>,
                       vector<tuple<int, int, ListNode*>>,
                       greater<tuple<int, int, ListNode*>>>
            pq;
        int c = 0;
        for (auto const node : lists) {
            ListNode* ll = node;
            while (ll) {
                pq.push({ll->val, c, ll});
                ll = ll->next;
                c++;
            }
        }
        ListNode* newList = new ListNode(0);
        ListNode* tail = newList;
        while (!pq.empty()) {
            auto [val, ctr, ptr] = pq.top();
            pq.pop();
            tail->next = ptr;
            tail = tail->next;
        }
        tail->next = nullptr;
        return newList->next;
    }
};