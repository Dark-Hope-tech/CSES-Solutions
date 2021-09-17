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
using namespace std;
int nC2(int n)
{
    return ((n - 1) * n) / 2;
}
signed main()
{
    fast
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int moves = 0;
    if (n >= 3)
    {
        cout << "0\n"
             << "6\n";
        for (int i = 3; i <= n; i++)
        {
            moves = 0;
            moves = (((i - 1) * 2) * (i - 2)) * 2;
            // cout<<moves<<endl;
            int tot = nC2(i * i);
            cout << tot - moves << endl;
        }
    }
    else if (n == 1)
        cout << "0" << endl;
    else
        cout << "0\n"
             << "6\n";
}