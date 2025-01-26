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
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        vector<int> lol;

        for (int i = 0; i < lists.size(); i++)
        {
            ListNode *temp = lists[i];
            while (temp)
            {
                lol.push_back(temp->val);
                temp = temp->next;
            }
        }
        if (lol.empty())
            return nullptr;

        sort(lol.begin(), lol.end());

        ListNode *ans = new ListNode(lol[0]);
        ListNode *curr = ans;
        for (int i = 1; i < lol.size(); i++)
        {
            curr->next = new ListNode(lol[i]);
            ans->next->val = lol[i];
        }
        return ans;
    }
};