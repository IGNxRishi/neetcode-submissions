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
    struct Compare {
        bool operator()(ListNode* a, ListNode* b) { return a->val > b->val; };
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare> pq;
        for (auto list : lists) {
            ListNode* head = list;
            if (head) {
                pq.push(head);
            }
        }
        ListNode tmp(0);
        ListNode* ans = &tmp;

        while (!pq.empty()) {
            ListNode* node = pq.top();
            pq.pop();
            ans->next = node;
            ans = ans->next;
            if (node->next) {
                pq.push(node->next);
            }
        }
        return tmp.next;
    }
};
