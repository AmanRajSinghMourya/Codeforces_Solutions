#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int tc = 1;
    cin >> tc;
    vector<int> v(tc);
    for (int t = 0; t < tc; t++)
    {
        cin >> v[t];
    }
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int miniIndex = 0;
    int maxiIndex = 0;
    for (int t = 0; t < tc; t++)
    {
        if (v[t] > maxi)
        {
            maxi = v[t];
            maxiIndex = t;
        }
        if (v[t] <= mini)
        {
            mini = v[t];
            miniIndex = t;
        }
    }

    cout << abs(0 - maxiIndex) + abs(tc - 1 - miniIndex) - (maxiIndex > miniIndex ? 1 : 0);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}