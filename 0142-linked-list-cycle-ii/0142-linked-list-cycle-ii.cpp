/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       unordered_map<ListNode*,int>mp;
       ListNode* slow=head;
       ListNode*  fast=head;int count=0;
       while(fast!=NULL && fast->next!=NULL){
        if(mp.find(slow)!=mp.end()) return slow;;
        mp[slow]=count;
        slow=slow->next;
        fast=fast->next->next;
        count++;
       }
       return NULL;
    }
};