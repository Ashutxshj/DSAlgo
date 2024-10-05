#include <iostream>
using namespace std;
long calculateWays(int K)
{
    long totalWays = ((long)K * K * (K * K - 1) / 2);
    long attackingWays = 4 * (K - 1) * (K - 2);
    long ans = totalWays - attackingWays;
    return ans;
}
int main()
{
    //?Knight
    //? 1x1=0
    //? 2x2=6 , 2*2=4 spaces...
    //? B-1,W-2,3,4 B-2,W-1,3,4 B-3,W-1,2,4 B-4,W-1,2,3
    //? (1,2)(1,3)(1,4)(2,3)(2,4)(3,4)
    int n;
    cin >> n;
    //* 1 - 0      2   6   14
    //* 2 - 6      4   22  46
    //* 3 - 28     8   68  80
    //* 4 - 96     16  156
    //* 5 - 252    32  298
    //* 6 - 550    64
    //* 7 - 1056   128
    //* 8 - 1848   256

    //! Total Number of Ways Two Knights that don't attack each other
    //! K2(K2-1)/2-(4(K-1)(K-2))
    for (int i = 1; i < n + 1; i++)
    {
        cout << calculateWays(i) << "\n";
    }
}