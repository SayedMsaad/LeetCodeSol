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
    ListNode* reverse(ListNode* head) {
        if (!head || !head->next) {
            head;
        }
        ListNode* pre = nullptr;
        ListNode* curr = head;
        ListNode* front = nullptr;
      
        while (curr) {
            front = curr->next;
            curr->next = pre;
            pre = curr;
            curr = front;
        }
        return pre;
    }
    ListNode* kthelement(ListNode* head, int k) {
        k -= 1;
        while (head && k != 0) {
            head = head->next;
            k--;
        }
        return head;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        // ListNode* ans = nullptr;
        ListNode* pre = nullptr;
        ListNode* nextNode = nullptr;
        while (temp) {
            ListNode* kth = nullptr;
            kth = kthelement(temp, k);
            if (kth) {
                nextNode = kth->next;
                kth->next = nullptr;
                ListNode* revhead = reverse(temp);
                cout<<revhead->val;
                if (head == temp) {
                    head = kth;
                    pre=temp;
                    temp=nextNode;
                }else{
                    pre->next=revhead;
                    pre=temp;
                    temp=nextNode;
                }
            }else{
                pre->next=temp;
                break;
            }
        }

        return head;
    }
};