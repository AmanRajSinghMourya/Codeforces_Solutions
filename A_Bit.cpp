#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int tc = 1;
    cin >> tc;
    int x = 0;
    for (int t = 1; t <= tc; t++)
    {
        string s;
        cin >> s;
        if (s == "++X" || s == "X++" || s == "++x" || s == "x++" || s == "+X+")
            x++;
        else
            x--;
    }
    cout << x;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // cout << "Case #" << t << ": ";
    solve();
}