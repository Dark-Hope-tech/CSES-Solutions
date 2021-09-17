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
        int a, b;
        cin >> a >> b;
        bool fg = false;
        if (a < b)
            swap(a, b);
        if (a > 2 * b)
            fg = 0;
        else
        {
            a %= 3;
            b %= 3;
            if (a < b)
                swap(a, b);
            if ((a == b && b == 0) || (a == 2 && b == 1))
                fg = 1;
            else
                fg = 0;
        }
        flag
    }
}