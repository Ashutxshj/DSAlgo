class Solution
{
public:
    void segregate0and1(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        int low = 0, high = n - 1;
        while (low < high)
        {
            while (arr[low] == 0 & low < high)
            {
                low++;
            }
            while (arr[high] == 1 & low < high)
            {
                high--;
            }
            if (low < high)
            {
                swap(arr[low], arr[high]);
                low++;
                high--;
            }
        }
    }
}