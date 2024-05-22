#include <bits/stdc++.h>

using namespace std;
void solve()
{
    string s;
    cin >> s;
    if (s.length() > 10)
    {
        cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
    }
    else
    {
        cout << s << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}