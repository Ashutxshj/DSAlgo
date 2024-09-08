#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool is_in(const vector<int> &vec, int x)
{
    for (int y : vec)
    {
        if (x == y)
            return true;
    }
    return false;
}
int main()
{
    vector<int> vec = {10, 20, 30, 40, 50};
    cout << "Please enter a number to search for:\n";
    int x;
    cin >> x;
    cout << boolalpha << is_in(vec, x) << endl; // boolalpha makes 1 to true,0 to false

    vector<int> vic = {10, 20, 30, 40, 50};

    // Example visualization of the vector:
    /*
       Vector (Array):

       +---------+---------+---------+---------+---------+
       |   10    |   20    |   30    |   40    |   50    |
       +---------+---------+---------+---------+---------+
       |  Index0 |  Index1 |  Index2 |  Index3 |  Index4 |
       +---------+---------+---------+---------+---------+

       - The vector `vec` has a contiguous block of memory to store elements.
       - Elements are accessed using indices starting from 0.
       - `vec[0]` is 10, `vec[1]` is 20, and so on.
    */

    // Accessing elements
    cout << "Element at index 0: " << vec[0] << endl;    // Output: 10
    cout << "Element at index 1: " << vec.at(1) << endl; // Output: 20 (at() also checks bounds)

    // Modifying elements
    vec[2] = 100;                                              // Change value at index 2 to 100
    cout << "Modified element at index 2: " << vec[2] << endl; // Output: 100

    // Adding elements
    vec.push_back(60); // Adds 60 to the end of the vector

    // Removing elements
    vec.pop_back(); // Removes the last element (60)

    // Iterating over elements
    cout << "Iterating over the vector:" << endl;
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << "Index " << i << ": " << vec[i] << endl;
    }

    // Vector Size
    cout << "Current vector size: " << vec.size() << endl; // Output: 5 (after adding and removing)

    return 0;
}