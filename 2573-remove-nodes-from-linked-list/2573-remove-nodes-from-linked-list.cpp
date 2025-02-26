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
    ListNode* removeNodes(ListNode* head) {
        ListNode* t=head;
        vector<int> v;
        while(t!=nullptr){
            v.push_back(t->val);
            t=t->next;
        }
        vector<int> a;
        int n=v.size();
        int mx=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(v[i]>=mx){
                a.push_back(v[i]);
                mx=v[i];
            }
        }   
        reverse(a.begin(),a.end());
        ListNode* ans=new ListNode();
        ListNode* temp=ans;
        for(int i=0;i<a.size();i++){
            temp->next=new ListNode(a[i]);
            temp=temp->next;
        }
        return ans->next;
    }
};