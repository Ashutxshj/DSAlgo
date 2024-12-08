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
        ListNode *temp = head;
        int count = 0;
        while (temp)
        {
            temp = temp->next;
            count++;
        }
        int DelPos = count - n;
        if (DelPos == 0)
        {
            ListNode *toDel = head;
            head = head->next;
            delete toDel;
            return head;
        }
        temp = head;
        for (int i = 0; i < DelPos - 1; i++)
        {
            temp = temp->next;
        }
        ListNode *toDel = temp->next;
        temp->next = temp->next->next;
        delete toDel;

        return head;
    }
};