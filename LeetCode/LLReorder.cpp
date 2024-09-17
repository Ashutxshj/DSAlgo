#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    void reorderList(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
        ListNode *temp = head;
        vector<ListNode> arr;
        while (temp->next)
        {
            arr.push_back(temp);
            temp = temp->next;
        }
        temp = arr[0];
        temp->next = arr[arr.size() - 1];
        temp = temp->next;
        int i = 1;
        while (temp)
        {
            temp = arr[i];
            temp = temp->next;
            i++;
        }
        return head;
    }
};