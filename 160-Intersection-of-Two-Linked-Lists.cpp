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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* x=headA;
        ListNode* y=headB;

        while(x || y){
             if(x==y){
                return x;
            }

            if(x==nullptr){
                x=headB;
            }
            else if(y==nullptr){
                y=headA;
            }
            else{

            x=x->next;
            y=y->next;
           
            }

        }
        return NULL;
    }
};