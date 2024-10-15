class Solution
{
public:
    // Function to delete middle element of a stack.
    void DelMiddle(stack<int> &s, int count, int sizeOfStack)
    {
        if (count == sizeOfStack / 2)
        {
            s.pop();
            return;
        }
        int top = s.top();
        s.pop();
        DelMiddle(s, count + 1, sizeOfStack);
        s.push(top);
    }
    void deleteMid(stack<int> &s, int sizeOfStack)
    {
        // code here
        int count = 0;
        DelMiddle(s, count, sizeOfStack);
    }
};