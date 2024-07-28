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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;  
        ListNode* fast = head;  

        // Phase 1: Detect the loop
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;        
            fast = fast->next->next;  

            if (slow == fast) {
                slow = head; 
                // Phase 2: Find the first node of the loop
                while (slow != fast) {
                    slow = slow->next;  
                    fast = fast->next;  
                }
                return slow;  
            }
        }
        return NULL; 
    }
};