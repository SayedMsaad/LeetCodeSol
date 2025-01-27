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
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        bool check=false;

        while(fast && fast->next){
            if(check && fast==slow){
                return true;
            }
            check=true;
            slow=slow->next;
            fast=fast->next->next;
        }

        return false;

    }
};