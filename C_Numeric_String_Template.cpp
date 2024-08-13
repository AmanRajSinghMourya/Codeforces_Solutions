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

bool check_ans(string s, vl templateArray)
{
    if (templateArray.size() != s.size())
    {
        return false;
    }

    unordered_map<int, char> intToChar;
    unordered_map<char, int> charToInt;

    for (int i = 0; i < templateArray.size(); ++i)
    {
        int currentInt = templateArray[i];
        char currentChar = s[i];

        if (intToChar.count(currentInt) && intToChar[currentInt] != currentChar)
        {
            return false;
        }
        if (charToInt.count(currentChar) && charToInt[currentChar] != currentInt)
        {
            return false;
        }

        intToChar[currentInt] = currentChar;
        charToInt[currentChar] = currentInt;
    }

    return true;
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n_size, m, i = 0;
        cin >> n_size;
        vl arr(n_size);
        fo(i, n_size)
        {
            cin >> arr[i];
        }
        cin >> m;
        vector<string> b(m);
        fo(i, m)
        {
            cin >> b[i];
        }

        fo(i, m)
        {
            string temp = b[i];
            bool ans = check_ans(temp, arr);
            if (ans)
            {
                cout << "YES" << endl;
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
