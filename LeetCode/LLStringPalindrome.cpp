class Solution
{
public:
    bool compute(Node *head)
    {
        string str;
        Node *temp = head;
        while (temp != NULL)
        {
            str += temp->data;
            temp = temp->next;
        }
        int i = 0;
        int j = str.length() - 1;
        while (i <= j)
        {
            if (str[i] == str[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};