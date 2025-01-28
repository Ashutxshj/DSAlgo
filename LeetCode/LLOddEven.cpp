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
    ListNode *oddEvenList(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode *evenhead = head->next;
        ListNode *even = evenhead;
        ListNode *odd = head;

        while (odd->next && even->next)
        {
            odd->next = even->next;
            odd = even->next;
            even->next = odd->next;
            even = odd->next;
        }
        odd->next = evenhead;
        return head;
    }
};