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
        vector<int> a(n);

        fo(i, n)
        {
            cin >> a[i];
        }

        /*
        If the value of ai is even, then gcd(ai,2aj) at least 2, regardless of the value of aj.
        Therefore, we can put all the even values before the odd ones (it does not matter in
        what order). Now it remains to arrange the odd values.
        In fact, their order is not important, because gcd(ai,2aj)=gcd(ai,aj) (for odd ai and aj).
        This means that each pair will be considered exactly 1 time,
        regardless of the order of the odd elements
         */

        sort(a.begin(), a.end(), [](int x, int y)
             { return x % 2 < y % 2; });

        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                ans += __gcd(a[i], a[j] * 2) > 1;
            }
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