#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL);

#define IN cin >>
#define OUT cout <<
#define nl "\n"
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define write(a)          \
    for (auto x : a)      \
    {                     \
        cout << x << " "; \
    }                     \
    cout << nl;
#define read(a)       \
    for (auto &x : a) \
    {                 \
        cin >> x;     \
    }
using ll = long long int;
using ld = long double;
using pll = pair<ll, ll>;
using pii = pair<int, int>;
using vll = vector<ll>;
using vi = vector<int>;
const ll mod = (ll)(1e9) + 7LL;
const ll M = 988244353LL;

void solve()
{
    int n, m;
    cin>>n>>m;
    vector<string>arr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    for (int i=0;i<m-1;i++)
    {
        if (arr[n-1][i]=='D')
        {
            ans++;
        }
    }
    for (int i=0;i<n-1;i++)
    {
        if (arr[i][m-1]=='R')
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ll tc = 1;
    IN tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}