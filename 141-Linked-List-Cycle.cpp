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
    bool hasCycle(ListNode *head) {
        int count = 0;

        while(count< 100000){
            if(head == NULL) return false;
            head = head->next;
            count++;
        }
        return true;    
    }
};