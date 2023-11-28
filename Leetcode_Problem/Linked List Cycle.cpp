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
        if(head == NULL)return 0;
        ListNode* fst = head;
        ListNode* lst = head;
        while(1){
            if(lst->next == NULL or (fst->next==NULL or fst->next->next==NULL))return 0;
            fst = fst->next->next;
            lst = lst->next;
            if(lst == fst)return 1;
        }
        return 0;
    }
};