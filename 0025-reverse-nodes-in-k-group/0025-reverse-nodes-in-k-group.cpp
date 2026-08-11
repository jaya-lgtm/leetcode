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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0);
        dummy.next=head;
       ListNode* temp=&dummy;
       int count=0;
       while(temp){
        count++;
        temp=temp->next;
       }
       count--;
       int s=count/k;
       ListNode* newhead=head;
       ListNode* prev=&dummy;
       while(s>0){
        int c=1;
        ListNode *nh=NULL;
        ListNode* start=newhead;
        while(c<=k){
            ListNode* t=newhead;
            newhead=t->next;
            t->next=nh;
            nh=t;
            c++;
        }
        prev->next=nh;
        start->next=newhead;
        prev=start;
        s--;

       } 
       return dummy.next;
    }
};