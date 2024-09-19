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
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        //Doing operations on (len-n)th node
        if (head == nullptr || head.next == nullptr)
        {
            return head;
        }
        ListNode *temp = head;
        int len = 1;
        while (temp)
        {
            len++;
            temp = temp.next;
        }
        temp = head;
        int count = 1;
        int now = len - n - 1;
        while (temp)
        {
            if (count == now)
            {
                delete.temp;
            }
            else
            {
                count++;
            }
            temp = temp.next;
        }
        return head;
    }
};

Optimization
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