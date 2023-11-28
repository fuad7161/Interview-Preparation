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
    ListNode* reverseList(ListNode* head) {
        ListNode* nh = NULL;
        while(head!=NULL){
            ListNode* t = new ListNode(head->val);
            if(nh==NULL){
                nh = t;
            }else{
                t->next = nh;
                nh = t;
            }
            head=head->next;
        }
        return nh; 
    }
};