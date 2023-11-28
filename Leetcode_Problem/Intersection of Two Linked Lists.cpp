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
        int cnta = 0 , cntb = 0;
        ListNode* A = headA;
        ListNode* B = headB;
        while(A!=NULL){
            cnta++;
            A = A->next;
        }
        while(B!=NULL){
            cntb++;
            B = B->next;
        }
        
        int ex = abs(cnta - cntb);
        if(cnta > cntb){
            ListNode* A = headA;
            while(ex--)    {
                A = A->next;
            }
            headA = A;
        }else{
            ListNode* B = headB;
            while(ex--)    {
                B = B->next;
            }
            headB = B;
        }
        while(headA != headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};