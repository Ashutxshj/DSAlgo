//! Count Repetitions
int LongestRep(string s)
{
    int ans = 1, count = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        ans = max(ans, count);
    }
    return ans;
}
//! SubString Equal
bool canBeEqual(std::vector<int> &target, std::vector<int> &arr)
{
    std::sort(target.begin(), target.end());
    std::sort(arr.begin(), arr.end());
    return target == arr;
}
//! Strings are Anagrams
bool isAnagram(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}
//! Sum of Elements in Array
for (int i = 0; i < n; i++)
{
    sum += arr[i];
}
//! Max Element in Array
int maxElement = arr[0];
for (int i = 1; i < n; i++)
{
    if (arr[i] > maxElement)
    {
        maxElement = arr[i];
    }
}
//! Array Slicing
vector<int> slicing(const vector<int> &pog, int x, int y)
{
    return vector<int>(pog.begin() + x, pog.begin() + y + 1);
}
//! Frquency Count in Hashmap
for (int i = 0; i < s.length(); i++)
{
    mp[s[i]]++;
}
//! Hashmap Traversal
for (auto i : mp)
{
    pog.push_back(i.first);
    pog.push_back(i.second);
}
//! Alphabet Frequency
int freq[26] = {0};
for (int i = 0; i < str1.length(); i++)
{
    freq[str1[i] - 'A']++;
}
//! For Binary Search
//* to find the index, then always use while (left < right)
//* to return the index during the search, use while (left <= right)
//! Different Number
int singleNumber(vector<int> &nums)
{
    int r = 0;
    for (int num : nums)
    {
        r ^= num;
    }
    return r;
}
//! Rotate Array
void rotate(vector<int> &arr)
{
    // code here
    int temp = arr[arr.size() - 1];
    int temp2 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        temp2 = arr[i];
        arr[i] = temp;
        temp = temp2;
    }
}
//! Flag Method Array
for (int i = 0; i < nums.size(); i++)
{
    bool foundGreater = false; // Flag to check for a greater element
    for (int j = i + 1; j < nums.size(); j++)
    {
        if (nums[j] > nums[i])
        {
            result.push_back(nums[j]);
            foundGreater = true; // Set the flag
            break;
        }
    }
    // If no greater element was found
    if (!foundGreater)
    {
        result.push_back(-1);
    }
}