class Solution
{
public:
    std::vector<std::string> sortPeople(std::vector<std::string> &names, std::vector<int> &heights)
    {
        std::vector<std::pair<int, std::string>> hp;

        for (int i = 0; i < names.size(); i++)
        {
            hp.push_back({heights[i], names[i]});
        }

        std::sort(hp.begin(), hp.end(), [](const std::pair<int, std::string> &a, const std::pair<int, std::string> &b)
                  { return b.first < a.first; });

        std::vector<std::string> ans;
        for (int i = 0; i < hp.size(); i++)
        {
            ans.push_back(hp[i].second);
        }

        return ans;
    }
};
