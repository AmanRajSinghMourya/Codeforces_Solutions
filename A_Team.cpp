#include <bits/stdc++.h>

using namespace std;
void solve()
{

    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    int ans = 0;
    for (int t = 1; t <= tc; t++)
    {
        int cnt = 0;
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        if (n1 == 1)
            cnt++;
        if (n2 == 1)
            cnt++;
        if (n3 == 1)
            cnt++;
        if (cnt >= 2)
            ans++;
    }
    cout << ans;
}