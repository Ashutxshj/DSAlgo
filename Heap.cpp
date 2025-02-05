// Max Heap
int kthSmallest(vector<int> &arr, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < arr.size(); i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
            pq.pop();
    }
    return pq.top();
}
// Min Heap
int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < nums.size(); i++)
    {
        pq.push(nums[i]);
        if (pq.size() > k)
            pq.pop();
    }
    return pq.top();
}
// Traversing
while (!pq.empty())
{
    cout << pq.top() << ' ';
    pq.pop();
}