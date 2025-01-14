class Solution
{
public:
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
    {
        unordered_set<int> seen;
        vector<int> ans;
        int count = 0;

        for (int i = 0; i < A.size(); i++)
        {

            if (seen.count(A[i]))
            {
                count++;
            }
            else
            {
                seen.insert(A[i]);
            }

            if (seen.count(B[i]))
            {
                count++;
            }
            else
            {
                seen.insert(B[i]);
            }

            ans.push_back(count);
        }
        return ans;
    }
};
