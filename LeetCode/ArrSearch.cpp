class Solution
{
public:
    int search(vector<int> &arr, int key)
    {
        // complete the function here
        int n = arr.size();
        int index = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == key)
            {
                index = i;
            }
        }
        return index;
    }
};