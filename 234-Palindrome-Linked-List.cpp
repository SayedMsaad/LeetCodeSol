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
        ListNode* prev = NULL;
        ListNode* curr = head;
        if(!head || !head->next) return head;
        ListNode* front = head->next;

        while(curr){
            curr->next = prev;
            prev = curr;
            curr = front;
            if(front) front = front->next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* revHead = reverse(slow);

        fast = head;

        while(revHead){
            if(revHead->val != fast->val){
                reverse(slow);
                return false;
            }
            revHead = revHead->next;
            fast = fast->next;
        }
        return 1;
    }
};