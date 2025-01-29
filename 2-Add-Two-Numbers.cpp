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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=NULL;
        ListNode* it=head;
        int carry=0;

        while(l1||l2||carry){
            ListNode* temp;
            if(l1 && l2){
                int sum =l1->val+l2->val+carry;
                temp=new ListNode(sum%10);
                carry=sum/10;
            }
            else if(l1){
                int sum=l1->val+carry;
                temp=new ListNode(sum%10);
                carry=sum/10;
            }
            else if(l2){
                int sum =l2->val+carry;
                temp= new ListNode(sum%10);
                carry=sum/10;
            }
            else{
                temp=new ListNode(carry);
                carry=0;
            }

            if(l1)l1=l1->next;
            if(l2)l2=l2->next;

            if(!head){
                head=temp;
                it=head;
            }else{
                it->next=temp;
                it=temp;
            }
        }
        return head;
    }
};