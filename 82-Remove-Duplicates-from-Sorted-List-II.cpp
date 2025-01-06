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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* r=new ListNode(0,head);
        ListNode* l=r;
        while(head!=nullptr){
            if(head->next!=nullptr && head->val==head->next->val){
                while(head->next!=NULL&&head->val==head->next->val){
                    head=head->next;
                }
                l->next=head->next;
            }
            else{
                l=l->next;
            }
            head=head->next;
        }
        return r->next; 
    }
};