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
        unordered_map<ListNode*, int> map;

        ListNode* temp = headA;

        while(temp){
            map[temp]++;
            temp = temp->next;
        }

        temp = headB;
        while(temp){
            if(map[temp]) return temp;
            temp = temp->next;
        }
        return nullptr;
    }
};