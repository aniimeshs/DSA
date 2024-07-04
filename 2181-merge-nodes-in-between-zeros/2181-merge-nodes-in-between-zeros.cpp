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
    ListNode* mergeNodes(ListNode* head) {
        stack<int> stk;
        int sum = 0;
        while(head) {
            sum += head->val;
            if(head->val == 0 and sum) {
                stk.push(sum);
                sum = 0;
            }
            head = head->next;
        }
        ListNode* prev = NULL;
        while (!stk.empty()) {
            head = new ListNode(stk.top(), prev);
            stk.pop();
            prev = head;
        }
        return head;
    }
};