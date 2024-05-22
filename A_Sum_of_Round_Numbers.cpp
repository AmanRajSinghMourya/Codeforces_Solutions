// #include <bits/stdc++.h>
// using namespace std;
// #define gc getchar_unlocked
// #define fo(i, n) for (i = 0; i < n; i++)
// #define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
// #define ll long long
// #define deb(x) cout << #x << "=" << x << endl
// #define pb push_back
// #define mp make_pair
// #define F first
// #define S second
// #define all(x) x.begin(), x.end()
// #define clr(x) memset(x, false, sizeof(x))
// #define sortall(x) sort(all(x))
// #define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
// #define PI 3.1415926535897932384626
// #define mod 1000000007
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pl;
// typedef vector<int> vi;
// typedef vector<ll> vl;
// typedef vector<pii> vpii;
// typedef vector<pl> vpl;
// typedef vector<vi> vvi;
// typedef vector<vl> vvl;
// void solve()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         /* code */
//         int n;
//         cin >> n;
//         vi num(6, 0);
//         int cnt = 0;
//         int power = 1;
//         for (int i = 1; i < 6; i++)
//         {
//             num[i] = n % 10;
//             n = n / 10;
//             if (num[i] != 0)
//             {
//                 cnt++;
//             }
//         }
//         cout << cnt << endl;
//         for (int i = 1; i < 6; i++)
//         {
//             if (num[i] != 0)
//             {
//                 cout << num[i] * power << " ";
//             }
//             power = power * 10;
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     solve();
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define int long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int32_t main()
{
    FIO;
    w(t)
    {
        int pw = 1;
        vi v;
        int n;
        cin >> n;
        while (n)
        {
            if (n % 10)
                v.pb((n % 10) * pw);

            n /= 10, pw *= 10;
        }

        cout << v.size() << '\n';

        for (int i : v)
            cout << i << ' ';
        cout << '\n';
    }
    return 0;
}