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
    ar[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        ar[i] = (i * (i + 1)) / 2;
    }
    vi a, b;
    if (ar[n] % 2 == 0)
    {
        if (n % 4 == 0)
        {
            cout << "YES" << endl;
            int cnt = 0;
            vi x, y;
            for (int i = 1; i <= n; i++)
            {
                cnt++;
                if (cnt == 1 || cnt == 4)
                    x.pb(i);
                else
                    y.pb(i);
                if (cnt == 4)
                    cnt = 0;
            }
            // sort(all(x),greater<int>());
            // sort(all(y),greater<int>());
            cout << x.size() << endl;
            for (int i : x)
                cout << i << " ";
            cout << "\n"
                 << y.size() << "\n";
            for (int i : y)
                cout << i << " ";
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 1; i <= n; i++)
            {
                if (ar[i] % 2)
                    a.pb(i);
                else
                    b.pb(i);
            }
            cout << a.size() << endl;
            for (int i : a)
                cout << i << " ";
            cout << "\n"
                 << b.size() << endl;
            ;
            for (int i : b)
                cout << i << " ";
        }
    }
    else
        cout << "NO" << endl;
}