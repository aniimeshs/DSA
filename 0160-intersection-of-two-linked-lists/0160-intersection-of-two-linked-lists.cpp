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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // Step 1: Find lengths of both lists
        int lenA = getLength(headA);
        int lenB = getLength(headB);
        
        // Step 2: Move pointer of longer list
        while (lenA > lenB) {
            headA = headA->next;
            lenA--;
        }
        while (lenB > lenA) {
            headB = headB->next;
            lenB--;
        }
        
        // Step 3: Move both pointers until they meet
        while (headA != headB) {
            headA = headA->next;
            headB = headB->next;
        }
        
        return headA; // Will be null if no intersection
    }
    
    int getLength(ListNode *head) {
        int len = 0;
        while (head) {
            len++;
            head = head->next;
        }
        return len;
    }
};