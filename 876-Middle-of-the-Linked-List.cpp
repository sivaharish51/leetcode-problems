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
    ListNode* middleNode(ListNode* head) {
        vector<int> v;
        ListNode* temp=head;
        int c=0;
        while(head!=NULL){
                v.push_back(head->val);
                head=head->next;
                c++;
        }
        for(int i=0;i<c/2;i++){
            temp=temp->next;
        }
        
        ListNode* ans=new ListNode();
        ListNode* t=ans;
        while(temp!=NULL){
            t->next=new ListNode(temp->val);
            temp=temp->next;
            t=t->next;
        }
        return ans->next;  
    }
};