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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> arr(m, vector<int>(n, -1));
        int r_start = 0, c_start = 0;
        int r_end = m - 1, c_end = n - 1;
        ListNode* temp = head;
        while (r_start <= r_end and c_start <= c_end) {
            int i = c_start;
            while (i <= c_end) {
                if (temp != nullptr) {
                    arr[r_start][i] = temp->val;
                    temp = temp->next;
                }
                else return arr;
                i++;
            }
            r_start++;

            int j = r_start;
            while (j <= r_end) {
                if (temp != nullptr) {
                    arr[j][c_end] = temp->val;
                    temp = temp->next;
                }
                else return arr;
                j++;
            }
            c_end--;

            int k = c_end;
            if (r_start <= r_end) {
                while (k >= c_start) {
                    if (temp != nullptr) {
                        arr[r_end][k] = temp->val;
                        temp = temp->next;
                    }
                    else return arr;
                    k--;
                }
                r_end--;
            }

            int l = r_end;
            if (c_start <= c_end) {
                while (l >= r_start) {
                    if (temp != nullptr) {
                        arr[l][c_start] = temp->val;
                        temp = temp->next;
                    }
                    else return arr;
                    l--;
                }
                c_start++;
            }
        }
        return arr;
    }
};
