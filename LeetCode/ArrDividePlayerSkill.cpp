#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int n = skill.size();
        int totalSkill = skill[0] + skill[n - 1];
        long long chemistrySum = 0;

        for (int i = 0; i < n / 2; i++) {
            if (skill[i] + skill[n - i - 1] != totalSkill) {
                return -1;
            }
            chemistrySum += (long long)skill[i] * skill[n - i - 1];
        }
        return chemistrySum;
    }
};
int main()
{
    Solution s = Solution();
    vector<int> vec = {5, 1, 3, 6};

    //? 1 3 5 6
    //? 1+5!=3+5

    //? {1,2,3,4,5,6}
    //?  0 1 2 3 4 5
    cout << s.dividePlayers(vec);
}