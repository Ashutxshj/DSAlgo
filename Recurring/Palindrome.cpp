bool isPalindrome(vector<int> arr)
{
    for (int i = 0; i < arr.size() / 2; i++)
    {
        if (arr[i] != arr[arr.size() - i - 1])
            return true;
    }
    return false;
}