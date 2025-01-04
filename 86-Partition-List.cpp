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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp=head;
        ListNode* s=new ListNode();
        ListNode* e=new ListNode();
        ListNode* s1=s;
        ListNode* e1=e;
        while(temp!=NULL){
            if(temp->val < x){
                s->next=new ListNode(temp->val);
                s=s->next;
            }
            else if(temp->val >= x){
                e->next=new ListNode(temp->val);
                e=e->next;
            }
            temp=temp->next;
        }
        e->next=nullptr;
        s->next=e1->next;
        return s1->next;
    }
};