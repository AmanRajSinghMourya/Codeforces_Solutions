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

// int getSum(int left, int right, vector<int> arr)
// {
//     int as = 0;
//     for (int i = left; i <= right; i++)
//     {
//         as += arr[i];
//     }
//     return as;
// }
// void solve()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, i = 0;
//         cin >> n;
//         vi a(n);
//         vector<char> b(n);
//         fo(i, n)
//         {
//             cin >> a[i];
//         }
//         fo(i, n)
//         {
//             cin >> b[i];
//         }
//         int left = 0, right = n - 1;
//         int ans = 0;
//         while (left < right)
//         {
//             if (b[left] == 'R')
//             {
//                 left++;
//             }
//             if (b[right] == 'L')
//             {
//                 right--;
//             }
//             if (b[left] == 'L' && b[right] == 'R')
//             {
//                 ans += getSum(left, right, a);
//                 left++;
//                 right--;
//             }
//         }
//         cout << ans << endl;
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
void hehehe()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    vector<long long> pref(n + 1);
    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + a[i];
    }
    vector<int> ll, rr;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            ll.push_back(i);
        else
            rr.push_back(i);
    }
    reverse(ll.begin(), ll.end());
    long long ans = 0;
    while (ll.size() and rr.size() and ll.back() <= rr.back())
    {
        ans += pref[rr.back() + 1] - pref[ll.back()];
        ll.pop_back();
        rr.pop_back();
    }
    cout << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        hehehe();
    }
}