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
        /*
        Consider the first four actions that the grasshopper will perform,
        starting at a point with coordinate 0

        coordinate 0 is even, jumping left to 1 leads to −1
        coordinate −1 is odd, jumping right to 2 leads to 2
        coordinate 1 is odd, jumping right to 3 leads to 4
        coordinate 4 is even, jumping left to 4 leads to 0
        If you look closely at the next four jumps, they follow the same pattern:
        jump to the left, two jumps to the right, jump to the left.
        In general, making jumps with numbers 4k+1…4k+4,
        the grasshopper will start from coordinate 0
        */
        ll x, n;
        cin >> x >> n;
        ll ans;
        if (x % 2 == 0)
        {
            if (n % 4 == 0)
                ans = x;
            if (n % 4 == 1)
                ans = x - n;
            if (n % 4 == 2)
                ans = x + 1;
            if (n % 4 == 3)
                ans = n + 1 + x;
        }
        else
        {
            if (n % 4 == 0)
                ans = x;
            if (n % 4 == 1)
                ans = x + n;
            if (n % 4 == 2)
                ans = x - 1;
            if (n % 4 == 3)
                ans = x - 1 - n;
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