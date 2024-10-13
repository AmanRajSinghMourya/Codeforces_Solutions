
#include <bits/stdc++.h>
using namespace std;
#define int long long

int dvii(int a, int b)
{
    return (a + b - 1) / b;
}

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int ttl = accumulate(a.begin(), a.end(), 0LL);
    int m_car = *max_element(a.begin(), a.end());
    int mini = max(dvii(ttl, x), m_car);
    cout << mini << endl;
    ;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}