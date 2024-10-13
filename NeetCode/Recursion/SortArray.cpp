//? Arr={1,3,4,6,7}
#include <iostream>
#include <vector>
typedef std::vector<int> v;
using namespace std;
void insert(v a, int i)
{
    if (a.size() == 0 || a[a.size() - 1] <= i)
        a.push_back(i);
        return;
    //*Smaller Input
    a.pop_back();
    insert(a,i);
    a.push_back(a[a.size()-1]);
}
void sortArr(v a)
{
    if (a.size() == 1)
    {
        return;
    }
    int temp=a[a.size()-1];
    a.pop_back();
    sortArr(a);
    insert(a,temp);
}
int main()
{
    v a = {1, 3, 4, 6, 7};
    sortArr(a);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}