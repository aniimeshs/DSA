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
    bool detectCycle(ListNode *slow, ListNode *fast) {
        if(!fast || fast -> next == NULL) return false;
        if(slow == fast) return true;

        return detectCycle(slow -> next, fast -> next -> next);
    }
    bool hasCycle(ListNode *head) {
        if(head == NULL || head -> next == NULL) return false;
        return detectCycle(head -> next, head -> next -> next);
    }
};