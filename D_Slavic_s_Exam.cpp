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
        string s, tr;
        cin >> s >> tr;
        ll count_q = 0;
        for (auto x : s)
        {
            if (x == '?')
                count_q++;
        }
        if (count_q >= tr.size())
        {
            ll t_index = 0;
            cout << "YES" << endl;
            for (ll i = 0; i < s.size(); i++)
            {
                if (count_q >= 0 && t_index < tr.size() && s[i] == '?')
                {
                    s[i] = tr[t_index];
                    count_q--;
                    t_index++;
                }
            }
            for (ll i = 0; i < s.size(); i++)
            {
                if (s[i] == '?')
                {
                    s[i] = 'a';
                }
            }
            cout << s << endl;
        }
        else
        {
            ll t_index = 0;
            ll s_index = 0;
            while (t_index < tr.size() && s_index < s.size())
            {
                if (s[s_index] == tr[t_index])
                {
                    t_index++;
                }
                else
                {
                    if (s[s_index] == '?')
                    {
                        s[s_index] = tr[t_index];
                        t_index++;
                    }
                }

                s_index++;
            }
            if (t_index == tr.size())
            {
                cout << "YES" << endl;
                for (ll i = 0; i < s.size(); i++)
                {
                    if (s[i] == '?')
                    {
                        s[i] = 'a';
                    }
                }
                cout << s << endl;
                // cout << "T = " << tr << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
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