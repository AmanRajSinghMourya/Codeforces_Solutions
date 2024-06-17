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
        // write code here
        int n;
        cin >> n;
        string s;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            v.push_back(s);
        }
        bool flag = false, flag1 = false;
        int onex = 0, oney = 0;
        int onex2 = 0, oney2 = 0;
        for (int i = 0; i < n; i++)
        {
            string temp = v[i];
            for (int j = 0; j < n; j++)
            {
                if (v[i][j] == '1' && flag == false)
                {
                    onex = i;
                    oney = j;
                    flag = true;
                }
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            string temp = v[i];
            for (int j = 0; j < n; j++)
            {
                if (v[i][j] == '1' && flag1 == false)
                {
                    onex2 = i;
                    oney2 = j;
                    flag1 = true;
                }
            }
        }
        if (oney2 == oney)
            cout << "SQUARE" << endl;
        else
            cout << "TRIANGLE" << endl;
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