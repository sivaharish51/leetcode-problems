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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* t=head;
        vector<int> v;
        while(t!=nullptr){
            v.push_back(t->val);
            t=t->next;
        }    
        int n=v.size();
        vector<int> a(n,0);
        stack<int> s;
        for(int i=v.size()-1;i>=0;i--){
            while(!s.empty()&& v[s.top()]<=v[i]){
                s.pop();
            }
            if(!s.empty()){
                a[i]=v[s.top()];
            }
            s.push(i);
        }
        return a;
    }

};