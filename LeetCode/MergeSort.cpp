class Solution
{
public:
    void merge(int arr[], int l, int m, int r)
    {
        int left = l, right = m + 1, i = l;
        int temp[1000001];
        while (left <= m && right <= r)
        {
            if (arr[left] < arr[right])
            {
                temp[i] = arr[left];
                i++;
                left++;
            }
            else
            {
                temp[i] = arr[right];
                i++;
                right++;
            }
        }
        while (left <= m)
        {
            temp[i] = arr[left];
            i++;
            left++;
        }
        while (right <= r)
        {
            temp[i] = arr[right];
            i++;
            right++;
        }
        for (i = l; i <= r; i++)
            arr[i] = temp[i];
    }

public:
    void mergeSort(int arr[], int l, int r)
    {
        // code here
        if (l == r)
            return;
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
};