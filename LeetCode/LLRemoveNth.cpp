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