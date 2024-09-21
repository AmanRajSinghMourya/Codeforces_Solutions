#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int odds;
    if ((n - k + 1) % 2 == 1 && n % 2 == 1)
    {
        odds = ceil((k - 1) / 2.0) + 1;
    }
    else
    {
        odds = ceil((k - 1) / 2.0);
    }

    (odds % 2 == 0) ? cout << "Yes\n" : cout << "no\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}