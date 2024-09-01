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
        int n;
        cin >> n;
        vector<pair<long long, long long>> a1;
        vl a(n), b(n);
        for (long long i = 0; i < n; i++)
            cin >> a[i];

        for (long long i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 0; i < n; i++)
            a1.push_back({a[i], b[i]});

        sort(a1.begin(), a1.end(), [](pair<long long, long long> &e, pair<long long, long long> &g)
             { return e.second < g.second; });

        long long ans = 0;
        long long spell = 0;

        for (int i = 0; i < n; i++)
        {
            ans += a1[i].first + spell;
            spell = a1[i].second;
        }
        cout << ans << endl;
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