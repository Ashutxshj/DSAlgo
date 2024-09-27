class Solution
{
public:
    void reorderList(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return;
        }
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *second = slow->next;
        ListNode *prev = slow->next = nullptr;
        while (second)
        {
            ListNode *temp = second->next;
            second->next = prev;
            prev = second;
            second = temp;
        }


        ListNode *first = head;
        second = prev;
        while (second)
        {
            ListNode *temp1 = first->next;
            ListNode *temp2 = second->next;
            first->next=second;
            second->next=temp1;
            first=temp1;
            second=temp2;            
        }
    }
};