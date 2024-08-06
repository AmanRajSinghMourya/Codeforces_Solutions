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

string ans(vector<pair<ll, ll>> &arr, ll &n, ll &s, ll &m)
{
    if (arr[0].first - 0 >= s)
        return "YES";
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1].first - arr[i].second >= s)
            return "YES";
    }

    if (m - arr[n - 1].second >= s)
        return "YES";

    return "NO";
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        // s =  amount of time Alex takes to take a shower
        //  m =amount of minutes a day has.
        //  n = number of time arr
        ll n, s, m;
        cin >> n >> s >> m;
        vector<pair<ll, ll>> v;
        ll i = 0;
        while (i < n)
        {
            ll l, r;
            cin >> l >> r;
            v.push_back({l, r});
            i++;
        }
        // start case
        string s1 = ans(v, n, s, m);
        cout << s1 << endl;
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