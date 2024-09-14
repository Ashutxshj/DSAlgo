#include <iostream>
#include <vector>
#include <algorithm>
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
    ListNode *reverseList(ListNode *head)
    {
        vector<int> ll;
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
        ListNode *temp = head;
        while (temp)
        {
            ll.push_back(temp->val);
            temp = temp->next;
        }
        temp=head;
        reverse(ll.begin(), ll.end());
        int i=0;
        while((temp) && i<ll.size()){
            temp->val=ll[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};
int main()
{
    Solution s = Solution();
}