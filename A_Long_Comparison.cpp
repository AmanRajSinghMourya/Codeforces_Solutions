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
        long long x1, x2;
        int p1, p2;
        cin >> x1 >> p1 >> x2 >> p2;
        int mn = min(p1, p2);
        p1 -= mn;
        p2 -= mn;
        if (p1 >= 7)
            cout << ">" << endl;
        else if (p2 >= 7)
            cout << "<" << endl;
        else
        {
            for (int i = 0; i < p1; ++i)
                x1 *= 10;
            for (int i = 0; i < p2; ++i)
                x2 *= 10;
            if (x1 < x2)
                cout << "<" << endl;
            else if (x1 > x2)
                cout << ">" << endl;
            else
                cout << "=" << endl;
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