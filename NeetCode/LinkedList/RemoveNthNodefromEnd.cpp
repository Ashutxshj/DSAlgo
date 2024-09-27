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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int count=1;
        while(temp){
            temp=temp->next;
            count++;
        }
        temp=head;
        int i=1;
        while(i<count-n-1){
            temp=temp->next;
            i++;
        }
        ListNode* del=temp->next;
        temp->next=temp->next->next;
        delete(del);
        return head;
    }
};
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* fast=head;
       ListNode* slow=head;
       for(int i=0;i<n;i++){
        fast=fast->next;
       }
       if(fast==nullptr){
        return head->next;
       }
       while(fast->next){
        fast=fast->next;
        slow=slow->next;
       }
       ListNode* delNode=slow->next;
       slow->next=slow->next->next; //? For adjusting pointers of deleted nodes
       delete(delNode); //only in cpp as Java has garbage collector
       return head;
    }
};