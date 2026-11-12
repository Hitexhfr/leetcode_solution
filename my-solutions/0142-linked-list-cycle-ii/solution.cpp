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
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast && fast->next){
             slow = slow->next;
             fast = fast->next->next;
             if(fast==slow){
                ListNode* start = head;
                while(start!=slow){
                    start = start->next;
                    slow = slow->next;
                }
                return start;
             }
        }
     return NULL;
    }
};
