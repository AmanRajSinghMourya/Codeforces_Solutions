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

    /*
     It can be noticed that all subsequences with sum s−1 appear if
     we erase some 0-es from the array and also erase exactly one 1.
     We can independently calculate the number of ways to erase some 0-es from the array
     (that way the sum will remain the same)
     calculate the number of ways to erase exactly one 1 from the array
     (that way the sum will become equal to s−1),
     Therefore, the answer is equal to c0*c1,
     where c0 is the number of 0-es in the array, and c1 is the number of 1-s.
     */
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        int cnt0 = 0, cnt1 = 0;
        for (int i = 1; i <= n; ++i)
        {
            cin >> x;
            if (x == 0)
                cnt0++;
            if (x == 1)
                cnt1++;
        }
        cout << (1ll << cnt0) * (ll)cnt1 << '\n';
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