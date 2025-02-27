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
    int pairSum(ListNode* head) {
        ListNode* t=head;
        vector<int> v;
        while(t!=nullptr){
            v.push_back(t->val);
            t=t->next;
        }
        int mx=0,s=0;
        int n=v.size();
        for(int i=0;i<n/2;i++){
            s=v[i]+v[n-i-1];
            mx=max(mx,s);
        }
        return mx;
    }
};