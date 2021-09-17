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
    int n;
    cin >> n;
    int ar[n];
    if (n <= 3 && n >= 2)
        cout << "NO SOLUTION" << endl;
    if (n == 4)
        cout << "2 4 1 3" << endl;
    else
    {
        int cnt = 1;
        for (int i = 0; i < n; i += 2)
        {
            if (i % 2 == 0)
                ar[i] = cnt++;
        }
        for (int i = 1; i < n; i += 2)
            if (i % 2)
                ar[i] = cnt++;
        for (int i = 0; i < n; i++)
            cout << ar[i] << " ";
    }
}