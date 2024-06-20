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
        string s1, s2;
        cin >> s1 >> s2;
        int len1 = s1.length();
        int len2 = s2.length();
        int start1 = 0, start2 = 0;
        if (s1 == s2)
        {
            cout << "=" << endl;
            continue;
        }
        if (s1[len1 - 1] == 'M' || s2[len2 - 1] == 'M')
        {
            if (s1[len1 - 1] == 'S')
            {
                cout << "<" << endl;
                continue;
            }
            else if (s2[len2 - 1] == 'S')
            {
                cout << ">" << endl;
                continue;
            }
            else if (s1[len1 - 1] == 'L')
            {
                cout << ">" << endl;
                continue;
            }
            else if (s2[len2 - 1] == 'L')
            {
                cout << "<" << endl;
                continue;
            }
            else
            {
                cout << "=" << endl;
            }
        }
        else
        {
            if (s1[len1 - 1] == 'S')
            {
                if (s2[len2 - 1] == 'S')
                {
                    if (len1 < len2)
                    {
                        cout << ">" << endl;
                        continue;
                    }
                    else if (len1 > len2)
                    {
                        cout << "<" << endl;
                        continue;
                    }
                    else
                    {
                        cout << "=" << endl;
                        continue;
                    }
                }
                else
                {
                    cout << '<' << endl;
                }
            }
            else
            {
                if (s2[len2 - 1] == 'S')
                {
                    cout << '>' << endl;
                }
                else
                {
                    if (len1 < len2)
                    {
                        cout << '<' << endl;
                    }
                    else if (len1 > len2)
                    {
                        cout << '>' << endl;
                    }
                    else
                    {
                        cout << '=' << endl;
                    }
                }
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