#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;

    long long int sum_of_n = n * (n + 1) / 2;
    long long int sum_n = 0;
    long long int num;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> num;
        sum_n += num;
    }
    long long int result = sum_of_n - sum_n;
    cout << result;
}