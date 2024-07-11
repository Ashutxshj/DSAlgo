class Solution
{
public:
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
};