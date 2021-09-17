#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define f() for (ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define int ll
#define vi vector<int>
#define a6 1000001
#define p push
#define pii pair<int, int>
#define um unordered_map<int, int>
#define flag                   \
    if (fg)                    \
        cout << "YES" << endl; \
    else                       \
        cout << "NO" << endl;
#define fo(i, n) for (int i = 0; i < n; i++)
using namespace std;
signed main()
{
    fast
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    int ar[26] = {0};
    fo(i, s.length())
    {
        ar[s[i] - 'A']++;
    }
    int cnt = 0;
    int idx;
    fo(i, 26)
    {
        if (ar[i] % 2)
        {
            idx = i;
            cnt++;
            ar[i] /= 2;
        }
        else
            ar[i] /= 2;
    }
    // fo(i,26) cout<<ar[i]<<" ";
    set<char> so;
    string ans = "", res;
    if (cnt > 1)
        cout << "NO SOLUTION" << endl;
    else
    {
        fo(j, 26)
        {
            // if(j+'A'!=idx+'A')
            fo(i, ar[j]) ans.pb(j + 'A');
        }
        res = ans;
        reverse(all(res));
        if (cnt != 0)
            ans.pb(idx + 'A');
        ans += res;
        cout << ans << endl;
    }
}