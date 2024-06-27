class Solution
{
public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        int ans = -1;
        if (head == NULL)
        {
            ans = 0;
            return ans;
        }

        int count = 0;
        Node *temp = head;

        while (temp)
        {
            temp = temp->next;
            count++;
        }

        int mid = count / 2;
        count = 0;
        temp = head;

        while (temp)
        {
            if (count == mid)
            {
                ans = temp->data;
                break;
            }
            temp = temp->next;
            count++;
        }

        return ans;
    }
};