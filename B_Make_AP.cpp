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
bool checkAP(ll a, ll b, ll c)
{
    if (abs(b - a) == abs(c - b))
    {
        return true;
    }
    return false;
}
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        // for a, b = a+d, c = a+2d, we do not touch b and c so
        //  d = c - b
        //  a = b - d = b - (c-b)
        ll new_a = b - (c - b);
        if (new_a >= a && new_a % a == 0)
        {
            cout << "YES\n";
            continue;
        }

        // a = a, b = a+d, c = a+2d
        // d = c-a/2
        // b = a+d = a + (c-a)/2
        ll new_b = a + (c - a) / 2;
        if (new_b >= b && (c - a) % 2 == 0 && new_b % b == 0)
        {
            cout << "YES\n";
            continue;
        }

        // a = a, b = a+d, c = a+2d
        // d = b-a
        // c = b+d = b + (b-a)
        ll new_c = b + (b - a);
        if (new_c >= c && new_c % c == 0)
        {
            cout << "YES\n";
            continue;
        }
        else
        {
            cout << "NO" << endl;
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