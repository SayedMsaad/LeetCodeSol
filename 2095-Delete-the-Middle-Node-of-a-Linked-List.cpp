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
    ListNode* deleteMiddle(ListNode* head) {
        int len =  0;
        if(!head || !head->next) return NULL;
        ListNode* temp = head;
        while(temp){
            len++;
            temp = temp->next;
        }
        len = len/2-1;
        temp = head;
        while(len-- ){
            temp =temp->next;
        }
       if(temp->next) temp->next = temp->next->next;
        return head;
    }
};