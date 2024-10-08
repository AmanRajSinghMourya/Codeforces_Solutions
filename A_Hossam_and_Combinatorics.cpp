#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    ll cOfMin = 0, cOfMax = n - 1;

    if (arr[0] == arr[n - 1])
    {
        cout << n * (n - 1) << nline;
        return;
    }

    while (arr[0] == arr[cOfMin])
    {
        cOfMin++;
    }
    while (arr[n - 1] == arr[cOfMax])
    {
        cOfMax--;
    }

    cOfMax = n - cOfMax - 1;
    cout << 2 * (cOfMax * cOfMin) << nline;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
}