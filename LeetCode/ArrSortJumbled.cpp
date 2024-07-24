class Solution
{
public:
    vector<int> sortJumbled(vector<int> &mapping, vector<int> &nums)
    {
        auto transform = [&](int num)
        {
            string str = to_string(num);
            for (char &digit : str)
            {
                digit = '0' + mapping[digit - '0'];
            }
            return stoi(str);
        };

        vector<pair<int, int>> tnums;
        for (int num : nums)
        {
            tnums.push_back({num, transform(num)});
        }

        sort(tnums.begin(), tnums.end(), [](pair<int, int> &a, pair<int, int> &b)
             { return a.second < b.second; });

        vector<int> snums;
        for (auto &p : tnums)
        {
            snums.push_back(p.first);
        }

        return snums;
    }
};