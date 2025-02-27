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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* t=head;
        vector<int> v;
        int cnt=0,g=1,s=0;
        bool f=false;
        while(t!=nullptr){
            f=false;
            cnt++;
            v.push_back(t->val);
            t=t->next;
            if(g==cnt){
                f=true;
                if(cnt%2==0){
                    reverse(v.begin()+s,v.begin()+(s+cnt));
                    g++;
                    s=s+cnt;
                    cnt=0;
                }
                else{
                    g++;
                    s=s+cnt;
                    cnt=0;
                }
            }
        }
        if(f==false && cnt%2==0){
            reverse(v.begin()+s,v.begin()+(s+cnt));
        }
        ListNode* ans=new ListNode();
        ListNode* temp=ans;
        for(int i=0;i<v.size();i++){
            temp->next=new ListNode(v[i]);
            temp=temp->next;
        }
        return ans->next;
    }
};