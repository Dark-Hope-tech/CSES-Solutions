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
#define fo(i, n) for (int i = 0; i < n; i++)
#define pii pair<int, int>
using namespace std;
signed main()
{
    fast
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    tc
    {
        int x, y, st, ed;
        cin >> x >> y;
        if (x % 2 == 0)
        {
            st = x * x;
        }
        else
        {
            st = (x - 1) * (x - 1) + 1;
        }
        if (y % 2)
        {
            ed = y * y;
        }
        else
        {
            ed = (y - 1) * (y - 1) + 1;
        }
        int j = 0, ans = st;
        if (x >= y)
        {
            if (x % 2)
                ans += (y - 1);
            else
                ans -= (y - 1);
            // cout<<ans<<endl;
        }
        else
        {
            ans = ed;
            if (ed % 2)
                ans -= (x - 1);
            else
                ans += (x - 1);
        }
        cout << ans << endl;
    }
}