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

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *dummy = new ListNode(0, head);
        ListNode *left = dummy;
        ListNode *right = head;

        while (n > 0)
        {
            right = right->next;
            n--;
        }

        while (right)
        {
            left = left->next;
            right = right->next;
        }

        left->next = left->next->next;
        return dummy->next;
    }
};

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
        int len = 0;
        while (temp)
        {
            len++;
            temp = temp->next;
        }
        if (len == n)
        {
            ListNode *head2 = head->next;
            delete head;
            return head2;
        }
        temp = head;
        for (int i = 0; i < len - n; i++)
        {
            temp = temp->next;
        }
        ListNode *node = temp->next;
        temp->next = temp->next->next;
        delete node;

        return head;
    }
};