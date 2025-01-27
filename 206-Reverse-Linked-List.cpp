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
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode* pre=nullptr;
        ListNode* current=head;
        ListNode* front=head->next;


        while(current){
            current->next=pre;
            pre=current;
            current=front;
            // pre->next=front;
           if(front) front=front->next;
        }

        return pre;
    }
};