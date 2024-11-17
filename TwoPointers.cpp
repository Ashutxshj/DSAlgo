#include <iostream>
#include <vector>
//* Always Sort before Two Pointers
using namespace std;
template <typename T>
void PairWithGivenSum(const vector<T> &arr)
{
    T targetSum = 10;
    int left = 0;
    int right = arr.size() - 1;

    while (left < right)
    {
        T currentSum = arr[left] + arr[right];
        if (currentSum == targetSum)
        {
            cout << " Pair found: (" << arr[left] << ", " << arr[right] << ")\n";
            return;
        }
        else if (currentSum < targetSum)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    cout << "No pair found with the given sum" << endl;
}
int removeDuplicates(std::vector<T> &arr)
{
    if (arr.empty())
        return 0;

    int uniqueIndex = 0;
    for (int i = 1; i < arr.size(); ++i)
    {
        if (arr[i] != arr[uniqueIndex])
        {
            ++uniqueIndex;
            arr[uniqueIndex] = arr[i];
        }
    }
    return uniqueIndex + 1;
}
void reverseSubarray(std::vector<T> &arr, int start, int end)
{
    while (start < end)
    {
        std::swap(arr[start], arr[end]);
        ++start;
        --end;
    }
}
int main()
{
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Finding pairs with a given sum
    twoPointerExample(arr);

    // Removing duplicates from sorted array
    std::vector<int> sortedArr = {1, 1, 2, 3, 3, 4, 5, 5};
    int newSize = removeDuplicates(sortedArr);
    std::cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; ++i)
    {
        std::cout << sortedArr[i] << " ";
    }
    std::cout << "\n";

    // Reversing a subarray
    std::vector<int> arrToReverse = {1, 2, 3, 4, 5};
    reverseSubarray(arrToReverse, 1, 3);
    std::cout << "Array after reversing subarray: ";
    for (int i : arrToReverse)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}
