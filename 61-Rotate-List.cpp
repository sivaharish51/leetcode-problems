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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* t=head;
        if(head==nullptr) return head;
        int c=1;
        while(head->next!=nullptr){
            c++;
            head=head->next;
        }
        head->next=t;
        int c1=k%c;
        for(int i=1;i<c-c1;i++){
            t=t->next;
        }
        head=t->next;
        t->next=nullptr;
        return head;
        
    }
};