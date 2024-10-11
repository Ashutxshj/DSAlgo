#include <iostream>
#include <vector>

typedef std::vector<int> v; //use std::

using namespace std;
void printElem(v a)
{
    if (a.size() == 0)
        return;

    cout << a[0] << " ";
    a.erase(a.begin());
    printElem(a);
}
int main()
{
    v f = {1, 2, 3, 4, 5};
    printElem(f);
}