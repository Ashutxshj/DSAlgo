// May the force be with you

//! Invert = 9-n
//? Ex. n=4, so 9-4=5
#include <iostream>
using namespace std;
int main()
{
    string t;
    cin >> t;
    for (long long int i = 0; i < t.size(); i++)
    {
        long long int digit = t[i] - '0';
        if (9 - digit < digit)
        {
            t[i] = '0' + (9 - digit);
        }
    }
    cout << t;
}