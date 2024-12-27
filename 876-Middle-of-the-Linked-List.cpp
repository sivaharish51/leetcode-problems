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
        
        ListNode* ans=new ListNode();
        ListNode* t=ans;
        for(int i=v.size()/2;i<v.size();i++){
            t->next=new ListNode(v[i]);
            t=t->next;
        }
        return ans->next;  
    }
};