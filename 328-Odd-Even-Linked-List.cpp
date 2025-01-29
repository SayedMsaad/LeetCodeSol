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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode* even=head->next;
        ListNode* slow=head;
        ListNode* fast=head->next;
        // ListNode* temp=head;
        
        

        while(fast && fast->next){
            slow->next=slow->next->next;
            slow=slow->next;

            fast->next=fast->next->next;
            fast=fast->next;
        }
        
        slow->next=even;

        return head;

    }
};