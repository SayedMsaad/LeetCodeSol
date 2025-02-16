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
    ListNode* reverseList(ListNode* &head) {
        if(!head){
            return 0;
        }
        ListNode* pre=nullptr;
        ListNode* curr=head;
        ListNode* front=nullptr;
       curr->next?front=curr->next:nullptr;

        while(front){
            curr->next=pre;
            pre=curr;
            curr=front;

            front=front->next;
        }

        return curr;

    }
};