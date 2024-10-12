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

        We can notice that the optimal strategy is to put the yoyos in the corners of the board.
        One solution may be checking the best distance for all pairs of corners.
        But, if we think a bit more, we can notice that placing the yoyos in opposite corners the distance
        will always be maximum possible (the distance always being 2⋅(n−1)+2⋅(m−1)).
        So, one possible answer is to always place the first yoyo in the top-left cell and the
        second one in the bottom-right cell.
        This is always optimal because, for any initial position of Anton, the distance will still be the
        same (2⋅(n−1)+2⋅(m−1)), this being the largest possible distance.
        The distance can not get larger than that, because if we move one of the yoyos it will get closer
        to the other yoyo and the distance will decrease by 1 or won't decrease,
        but it's impossible for it to increase.
        */
        int n, m, i, j;
        cin >> n >> m >> i >> j;
        // cout << 1 << " " << 1 << " " << n << " " << m << endl;
        cout << 1 << " " << m << " " << n << " " << 1 << endl;
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