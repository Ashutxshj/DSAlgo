// class Solution
// {
// public:
//     bool containsDuplicate(vector<int> &nums)
//     {
//         bool ans = false;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             for (int j = i + 1; j < nums.size(); j++)
//             {
//                 if (nums[i] == nums[j])
//                 {
//                     ans = true;
//                 }
//             }
//         }
//         return ans;
//     }
// };
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> st;
        for (int i = 0; i < nums.size(); i++)
        {
            if (st.find(nums[i]) != st.end()) //If the element doesnt exist in the set
                return true;

            st.insert(nums[i]);
        }
        return false;
    }
};