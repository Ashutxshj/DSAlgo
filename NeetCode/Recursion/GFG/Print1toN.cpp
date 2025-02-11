#include <iostream>
using namespace std;
void print1toN(int n)
{
    //? Base Condition Induction Hypothesis

    //*Hypothesis=>The func
    if (n == 1) //1 bc smallest valid input
    {
        cout << 1 << " ";
        return;
    }
    print1toN(n - 1);
    cout << n << " ";
}
void printNto1(int n)
{
    if (n == 1)
    {
        cout << 1 << " ";
        return;
    }
    cout << n << " ";
    printNto1(n - 1);
}
int main()
{
    print1toN(10);
    cout<<"\t";
    printNto1(10);
}