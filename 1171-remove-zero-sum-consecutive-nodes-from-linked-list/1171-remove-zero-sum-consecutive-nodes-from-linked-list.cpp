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
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<int>arr;
        ListNode* current = head;

        while(current != nullptr){
            arr.push_back(current->val);
            current = current->next;
        }

        for(int i = 0; i < arr.size(); i++){
            int sum = 0;
            for(int j = i; j < arr.size(); j++){
                sum += arr[j];
                if(sum == 0){
                    for(int k = i; k <= j; k++){
                        arr[k] = 0;
                    }
                    i = j;
                    break;
                }
            }
        }

        ListNode alt(0);
        ListNode* res = &alt;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] != 0){
                res->next = new ListNode(arr[i]);
                res = res->next;
            }
        }
        res->next = nullptr;
        return alt.next;
    }
};