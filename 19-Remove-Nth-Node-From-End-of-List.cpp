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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int cnt=0;
        if(head->next==nullptr){
            return NULL;
        }
        

        while(temp){
            cnt++;
            temp=temp->next;
        }
        cout<<cnt;
       
        int pos=cnt-n-1;
        temp=head;
        if(pos<0){
            head=head->next;
            return head;
        }

        while(pos){
            temp=temp->next;
            pos--;
        }
        cout<<temp->val;
        temp->next=temp->next->next;
        
        return head;
    }
};