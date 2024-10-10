#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int answer(string s, int bn, int sn, int cn, int bp, int sp, int cp, ll r)
{
    int b_count = 0, s_count = 0, c_count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'B')
        {
            b_count++;
        }
        else if (s[i] == 'S')
        {
            s_count++;
        }
        else
        {
            c_count++;
        }
    }
    if (b_count == 0) b_count = 1;
    if (s_count == 0) s_count = 1;
    if (c_count == 0) c_count = 1;
    while (r>0)
    {
        int no_of_bread_can_make = bn / b_count;
        int no_of_sausage_can_make = sn / s_count;
        int no_of_cheese_can_make = cn / c_count;
        int min_value = min({no_of_bread_can_make, no_of_sausage_can_make, no_of_cheese_can_make});
        
        if(min_value==0) break;
        if (no_of_sausage_can_make == min_value)
        {
            if(r<sp) break;
            r -= sp;
            sn++;
        }
        else if (no_of_bread_can_make == min_value)
        {
            if (r<bp) break;
            r -= bp;
            bn++;
        }
        else if (no_of_cheese_can_make == min_value)
        {
            if(r<cp) break;
            r -= cp;
            cn++;
        }
    }
    int no_of_hamburgers=min({bn / b_count,sn / s_count,cn / c_count});
    return no_of_hamburgers;
}
int main()
{
    string s;
    cin >> s;
    int bn, sn, cn;
    cin >> bn >> sn >> cn;
    int bp, sp, cp;
    cin >> bp >> sp >> cp;
    ll r;
    cin >> r;
    cout << answer(s, bn, sn, cn, bp, sp, cp, r);
    //? Need:-    B-3,S-2,C-1
    //? Have:-    B-6,S-2,C-3
    //? What More:- S=2
    //? Price:Rs 2
    //? Money in hand: Rs 4
    //? Can buy:- 4/2= 2S
    //? Now Have:- B-6,S-4,C-3
    //? Burgers:- Min(6/2,4/2,3/1)=>2
}