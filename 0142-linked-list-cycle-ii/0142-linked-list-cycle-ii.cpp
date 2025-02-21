/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<ListNode*, int> cycle;
    ListNode* cyclePoint(ListNode* head) {
        if (!head) return NULL;

        cycle[head]++;
        if (cycle[head] > 1) return head;
        return cyclePoint(head->next);
    }
    ListNode *detectCycle(ListNode *head) {
        // if(!head || head->val == 100500)return head;

        // head->val = 100500;
        // return detectCycle(head->next);
        if (!head) return nullptr;
        return cyclePoint(head);
    }
};