#include <iostream>
#include<algorithm>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
int gcd(int a,int b){
    int result=min(a,b);
    while(result>0){
        if(a%result==0 && b%result==0){
            break;
        }
        result--;
    }
    return result;
}
void insertAtHead(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
class Solution
{
public:
    ListNode *insertGreatestCommonDivisors(ListNode *head)
    {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* temp=head;
        while(temp && temp->next){
            int lol = gcd(temp->val,temp->next->val);
            ListNode* temp2=new ListNode(lol);
            //? Add in between two nodes
            temp2->next=temp->next;
            temp->next=temp2;
            temp=temp2->next;
        }
        return head;
    }
};
int main()
{
    Solution sol=Solution();
    //? ListNode head = {18,6,10,3};
    ListNode* node=nullptr;
    insertAtHead(node, 18);
    insertAtHead(node, 6);
    insertAtHead(node, 10);
    insertAtHead(node, 3);
    cout<<sol.insertGreatestCommonDivisors(node);
}