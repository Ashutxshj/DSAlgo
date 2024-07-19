int majorityElement(int a[], int size)
{
    int count = 0;
    int ans = -1;

    for (int i = 0; i < size; i++)
    {
        if (count == 0)
        {
            ans = a[i];
            count = 1;
        }
        else if (ans == a[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    count = 0;
    for (int i = 0; i < size; i++)
    {
        if (ans == a[i])
        {
            count++;
        }
    }

    if (count > size / 2)
    {
        return ans;
    }
    return -1;
}