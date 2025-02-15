class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> st;
        for (int c : nums)
        {
            st.insert(c);
        }
        return st.size() != nums.size();
    }
};