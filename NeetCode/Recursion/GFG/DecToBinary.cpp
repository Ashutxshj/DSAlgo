string decToBinary(int n)
{
    // IBH
    string s = "";
    while (n > 0)
    {
        int bit = n % 2;
        s += '0' + bit;
        n = n / 2;
    }
    reverse(s.begin(), s.end());
    return s;
}
string decToBinary(int n)
{
    // IBH
    if (n == 0)
        return "0";
    if (n == 1)
        return "1";

    int prev = stoi(decToBinary(n / 2));
    int ans = n % 2 + 10 * (prev);

    return to_string(ans);
}