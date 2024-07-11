#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, false, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define mod 1000000007
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i = 0;
        cin >> n;
        vi a(n);
        vector<string> b(n);
        fo(i, n) cin >> a[i] >> b[i];

        int min_find_10 = INT_MAX, min_find_01 = INT_MAX;
        int min_find_11 = INT_MAX;
        fo(i, n)
        {
            if (b[i] == "10" && min_find_10 > a[i])
                min_find_10 = a[i];
            if (b[i] == "01" && min_find_01 > a[i])
                min_find_01 = a[i];
            if (b[i] == "11" && min_find_11 > a[i])
                min_find_11 = a[i];
        }
        int ans1 = min_find_01 + min_find_10;
        int ans2 = min_find_11;
        if (min_find_11 != INT_MAX)
        {
            if (min_find_10 != INT_MAX && min_find_01 != INT_MAX)
                cout << min(ans1, ans2) << endl;
            else
                cout << ans2 << endl;
        }
        else
        {
            if (min_find_10 != INT_MAX && min_find_01 != INT_MAX)
                cout << ans1 << endl;
            else
                cout << -1 << endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}