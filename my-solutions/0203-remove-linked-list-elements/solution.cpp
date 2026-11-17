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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        ListNode* t = head;
        while(t){
            int value = t->val;
            if(value!=val){
            ListNode* newNode = new ListNode(value);
            curr->next = newNode;
            curr = curr->next;
            }
            t = t->next;
        }
      return dummy->next;
    }
};
