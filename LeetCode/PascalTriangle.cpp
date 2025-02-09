class Solution
{
public:
    vector<vector<int>> generate(int n)
    {
        // Recursion

        // base-case
        if (n == 1)
            return {{1}};

        // Hypothesis
        vector<vector<int>> t = generate(n - 1);

        // Induction

        // 1
        // 1 1
        //  1 1+1 1 -->1
        // 1 2+1 1+2 1 --->1,2
        // 1 1+3 3+3 3+1 1 --->1,2,3

        vector<int> back = t.back();
        vector<int> newRow(n, 1);

        for (int i = 1; i < n - 1; i++)
        {
            newRow[i] = back[i - 1] + back[i];
        }
        t.push_back(newRow);
        return t;
    }
};