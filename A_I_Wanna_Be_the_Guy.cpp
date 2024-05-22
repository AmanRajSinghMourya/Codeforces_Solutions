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
    int x1;
    cin >> x1;

    vi v(x1);
    for (int i = 0; i < x1; i++)
        cin >> v[i];
    int x2;
    cin >> x2;

    vi v2(x2);
    for (int i = 0; i < x2; i++)
        cin >> v2[i];

    set<int> s;
    for (int i = 0; i < x1; i++)
        s.insert(v[i]);
    for (int i = 0; i < x2; i++)
        s.insert(v2[i]);

    int cnt = 1;
    while (cnt <= t)
    {
        if (s.find(cnt) == s.end())
        {
            cout << "Oh, my keyboard!";
            return;
        }
        cnt++;
    }
    cout << "I become the guy.";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}