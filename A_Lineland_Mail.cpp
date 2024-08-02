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

    // write code here
    ll n;
    cin >> n;
    vl a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vl suffix_sum(n);
    vl prefix_sum(n);
    suffix_sum[n - 1] = 0;
    prefix_sum[0] = 0;

    for (ll i = n - 2; i >= 0; i--)
    {
        suffix_sum[i] = suffix_sum[i + 1] + abs(a[i + 1] - a[i]);
    }
    for (ll i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + (a[i] - a[i - 1]);
    }
    // 1st term
    cout << a[1] - a[0] << " " << a[n - 1] - a[0] << endl;
    for (ll i = 1; i < n - 1; i++)
    {
        cout << min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1])) << " ";
        cout << max(prefix_sum[i], suffix_sum[i]) << endl;
    }

    // last term
    cout << a[n - 1] - a[n - 2] << " " << a[n - 1] - a[0] << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}