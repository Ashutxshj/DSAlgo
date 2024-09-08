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
}