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
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
        ListNode *nextNode,*prevNode=NULL;
        while(head){
            nextNode=head->next;
            head->next=prevNode;
            prevNode=head;
            head=nextNode;
        }
        return prevNode;
    }
};
int main()
{
    Solution s = Solution();
}