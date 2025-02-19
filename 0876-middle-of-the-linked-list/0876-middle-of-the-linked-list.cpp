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
private: 
    ListNode* getMiddle(ListNode* slow, ListNode* fast) {
        if(fast == NULL || fast -> next == NULL) return slow;

        return getMiddle(slow -> next, fast -> next -> next);
    }
public:
    ListNode* middleNode(ListNode* head) {
        return getMiddle(head, head);
    }
};