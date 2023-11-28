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
        int l = 0;
        ListNode* tem = head;
        while(tem != NULL){
            tem = tem->next;
            l++;
        }
        n = l-n-1;
        if(n < 0) return head->next;
        tem = head;
        while(n--){
            tem = tem->next;
        }
        if(tem->next->next == NULL){
            tem->next = NULL;
        }else tem->next = tem->next->next;
        return head;
    }
};