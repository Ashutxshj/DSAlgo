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
        vector<ListNode*> arr;
        while (temp->next)
        {
            arr.push_back(temp);
            temp = temp->next;
        }
        //? Two Pointers
        int i=0,j=arr.size()-1;
        while(i<j){
            arr[i]->next=arr[j];
            i++;
            if(i<j){
                arr[j]->next=arr[i];
            }
            j--;
        }
        arr[i]->next=nullptr;
    }
};