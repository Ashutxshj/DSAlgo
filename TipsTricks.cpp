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
//! Find Element in Hashmap
if (mp.find(key) != mp.end())
{
    return true;
}
return false;
//! Element with frequency greater than n
for (auto &pair : mp)
{
    if (pair.second > n)
    {
        return true; // Found a duplicate
    }
}
//! Alphabet Frequency
int freq[26] = {0};
for (int i = 0; i < str1.length(); i++)
{
    freq[str1[i] - 'A']++;
}
//! For Binary Search
int left = 0, right = arr.size() - 1;

while (left <= right)
{
    int mid = left + (right - left) / 2; // Prevents overflow

    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] < target)
    {
        left = mid + 1;
    }
    else
    {
        right = mid - 1;
    }
}
return -1;
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
//! To ensure non-negative remainder
int rem = ((arr[i] % k) + k) % k;
//! Smallest SubArray with Sum K
typedef long long ll;
ll currSum = 0;
ll result = INT_MAX;

for (int i = 0; i < nums.size(); i++)
{
    currSum += nums[i];

    if (currSum == rem)
    {
        ll currLen = i;
        result = min(result, currLen);
    }
}
//! Maximum SubArray Sum
int best = 0, sum = 0;
for (int k = 0; k < n; k++)
{
    sum = max(array[k], sum + array[k]);
    best = max(best, sum);
}
return result;
//! Ternary Operation
return res < n ? res : -1;
== > return res if res < n else - 1;
//* condition ? expression_if_true : expression_if_false;
//! Making a sorted array
vector<int> vec;
arr = nums;
sort(arr.begin(), arr.end());
//! Always use Stack for Parenthesis

//! Min of three elements
int a = 5, b = 10, c = 3;
cout << min({a, b, c});
//! Char to Int
char ch = '9';
int num = ch - '0';
return num;
//! Instead of Auto
template <typename T>
void traverse_stack(stack<T> &st)
{
    if (st.empty())
        return;
    T x = st.top();
    cout << x << " ";
    st.pop();
    traverse_stack(st);
    st.push(x);
}
//! Shift Operator
int k = (1 << n) - 1; // equivalent to 2^n - 1
//! Count the occurrences of the target value in the vector
int cnt = count(vec.begin(), vec.end(), target);
//! Remove the first character from the input string (not the last)
string.erase(0, 1);
//! Input array when size not given
int num;
while (cin >> arr)
{
    arr.push_back(num);
}
std::string::npos : -constant that holds the max value of size_t;
basically - 1;
//! Check for input errors
if (cin.fail())
    cout << "Give integer input." << "\n";
//! Consecutive or Sorted
take arr[i] - arr[i - 1] = 1;
//! Circular Array
for (int i = ind; i < n + ind; i++)
    cout << a[(i % n)] << " ";
//! Circular Array (Twice)
for (int i = 2*n-1; i>=0; --i)
    cout << a[(i % n)] << " ";
//! Accumulate
vector<int> vec = {5, 10, 15};

// Defining range as whole array
auto first = vec.begin();
auto last = vec.end();

// Use accumulate to find the sum of elements in the vector
int sum = accumulate(first, last, 0);

std::accumulate(first, last, init, op);
//! Prefix Sum Array
void fillPrefixSum(int arr[], int n, int prefixSum[])
{
    prefixSum[0] = arr[0];
    // Adding present element with previous element
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
}
//! Suffix Sum Array
suffixSum[n - 1] = arr[n - 1];
// Traverse the array from n-2 to 0
for (int i = n - 2; i >= 0; i--)

    // Adding current element
    // with previous element from back
    suffixSum[i] = suffixSum[i + 1] + arr[i];
//! Reverse sort
sort(ans.rbegin, ans.rend());
//! Declaring 2D array
vector<vector<int>> arr(m, vector<int>(n, 0)); // Initialize with 0
//! Convert Bool into integers
cout << boolalpha << is_in(vec, x) << endl; // boolalpha makes 1 to true,0 to false
//! Remove Elements
// Use std::remove to move zeros to the end
auto newEnd = std::remove(arr.begin(), arr.end(), 0);
// Erase the redundant elements
arr.erase(newEnd, arr.end());
// Is Substring?
bool isSub(string a, string b)
{
    return b.find(a) != string::npos;
}
// Traversing
while (!pq.empty())
{
    cout << pq.top() << ' ';
    pq.pop();
}
