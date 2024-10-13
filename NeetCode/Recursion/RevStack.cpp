class Solution
{
public:
    void Insert(stack<int> &s, int a)
    {
        if (s.empty())
        {
            s.push(a);
        }
        else
        {
            int temp = s.top();
            s.pop();
            Insert(s, a);
            s.push(temp);
        }
    }
    void Reverse(stack<int> &St)
    {
        // Base Case,Hypothesis,Induction
        if (St.empty())
            return;

        int temp = St.top();
        St.pop();
        Reverse(St);

        // Stack-LIFO
        Insert(St, temp);
    }
};