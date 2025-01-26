#include<iostream>
#include<vector>
using namespace std;
bool isPalindrome(vector<int> arr)
{
    for (int i = 0; i < arr.size() / 2; i++)
    {
        if (arr[i] != arr[arr.size() - i - 1])
            return false;
    }
    return true;
}
int main(){
    vector<int>a={1,2,3};
    cout<<isPalindrome(a);
}