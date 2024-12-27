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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> v;
        ListNode* l1=list1;
        ListNode* l2=list2;
        while(l1!=NULL){
            v.push_back(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL){
            v.push_back(l2->val);
            l2=l2->next;
        }
        sort(v.begin(),v.end());
        ListNode* ans=new ListNode(-1);
        ListNode* temp=ans;
        for(int i=0;i<v.size();i++){
            temp->next=new ListNode(v[i]);
            temp=temp->next;
        }
        return ans->next;
    }
};