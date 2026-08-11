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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        int l=1;
       ListNode dummy(0);
       dummy.next=head;
       ListNode* temp=&dummy;
       while(l<left){
        temp=temp->next;
        l++;
       }
       ListNode *start=temp;
       temp=temp->next;
       ListNode* H=temp;
       ListNode* reverse=NULL;
       while(l<=right){
        ListNode* t=temp;
        temp=t->next;
        t->next=reverse;
        reverse=t;
        l++;
       }
       start->next=reverse;
       H->next=temp;
       return dummy.next;

    }
};