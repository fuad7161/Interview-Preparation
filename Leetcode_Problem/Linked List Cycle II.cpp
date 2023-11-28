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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL)return 0;
        ListNode* fst = head;
        ListNode* lst = head;
        int cnt = 0;
        while(1){
            if(lst->next == NULL or (fst->next==NULL or fst->next->next==NULL))return NULL;
            fst = fst->next->next;
            lst = lst->next;
            cnt++;
            if(lst == fst){
                ListNode* init = head;
                while(init!=lst){
                    init=init->next;
                    lst=lst->next;
                }
                return init;
            }
        }
        return NULL;
    }
};