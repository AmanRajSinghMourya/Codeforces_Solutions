#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int tc = 0;
    cin >> tc;
    string s;
    cin >> s;
    int a = 0, d = 0;
    for (int t = 0; t < tc; t++)
    {
        if (s[t] == 'A')
            a++;
        else
            d++;
        // cout << "Case #" << t << ": ";
    }
    if (a > d)
        cout << "Anton";
    else if (d > a)
        cout << "Danik";
    else
        cout << "Friendship";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}