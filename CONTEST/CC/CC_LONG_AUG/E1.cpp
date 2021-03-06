//**sn0wrus**//
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL);

#define IN cin >>
#define OUT cout <<
#define endl "\n"
#define all(a) (a).begin(), (a).end()
#define pb push_back
using ll = long long int;
using ld = long double;
using pll = pair<ll, ll>;
using pii = pair<int, int>;
using vll = vector<ll>;
using vi = vector<int>;
const ll mod = (ll)(1e9) + 7LL;
const ll M = 998244353LL;

const int dir8[8][2]={{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
const int dir4[4][2]={{1,0},{0,1},{-1,0},{0,-1}};

/*
for(int i=0;i<n-1;i++)
{
    int a,b;
    cin>>a>>b;
    a--,b--;
    adj[a].push_back(b);
    adj[b].push_back(a);
}
*/
ll n, k;
vector<ll>arr;
vector<ll>dp;

ll rec(int l)
{
    if(l>=n)
    {
        return 0;
    }
    else if(dp[l]!=-1){
        return dp[l];
    }
    else{
        dp[l]=INT_MAX;
        int g =0, tmp = 0;
        unordered_map<int,int>mp;
        for(int i=l;i<n;i++)
        {
            if(mp[arr[i]]==1)
            {
                tmp++;
            }
            mp[arr[i]]++;
            if(mp[arr[i]]>1)
            {
                g++;
            }
            dp[l]=min(dp[l],g+tmp+((i+1<n) ? k : 0)+rec(i+1));
        }
        return dp[l];
    }
}


void solve()
{
    cin>>n>>k;
    arr.clear();
    arr=vector<ll>(n);
    for(int i=0;i<n;i++)cin>>arr[i];

    dp.clear();
    dp = vector<ll>(n,-1);
    cout<<k+rec(0)<<endl;
}

int main()
{
    fast;
    ll tc = 1;
    IN tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}