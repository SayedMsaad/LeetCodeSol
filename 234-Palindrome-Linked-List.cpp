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
    ListNode* reverse(ListNode* &head){
        if(!head || !head->next){
            return head;
        }

        ListNode* pre=nullptr;
        ListNode* curr=head;
        ListNode* front=head->next;

        while(curr)
        {
            curr->next=pre;
            pre=curr;
            curr=front;

            if(front)front = front->next;
        }

        return pre;
    }
    ListNode* midelement(ListNode* &head){
        if(!head || !head->next){
            return head;
        }
        ListNode* slow=head;
        ListNode* fast=head->next->next;

        while(fast && fast->next){
            slow=slow->next;
            if(fast->next)fast=fast->next->next;
        }
        return slow;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* middle=midelement(head);

        ListNode* revhead=reverse(middle);

        while(head){
            if(head->val!= revhead->val){
                return false;
            }
            head=head->next;
            revhead=revhead->next;
        }
        return true;
    }
};