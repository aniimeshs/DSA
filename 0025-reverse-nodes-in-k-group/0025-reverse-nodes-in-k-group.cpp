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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        int count = 0;

        // Check if there are at least k nodes to reverse
        while (temp && count < k) {
            temp = temp->next;
            count++;
        }

        if (count < k) return head; // If less than k nodes, return as is
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;

        for (int i = 0; i < k && curr; i++) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head->next = reverseKGroup(curr, k);
        return prev; 
    }
};
