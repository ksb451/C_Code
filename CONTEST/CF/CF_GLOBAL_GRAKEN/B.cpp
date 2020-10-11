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

void solve()
{
	ll n,k;
    cin>>n>>k;
    set<ll>arr;
    for(int i=0;i<n;i++)
    	{
    		ll x;
    		cin>>x;
    		arr.insert(x);
    	}    
	n = arr.size();
	if(k==1)
	{
		if(n==1)
		{
			cout<<1<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
	else{
		int ans = 1;
		n-=k;
		if(n>0)
		{
			ans+=(n/(k-1));
			if(n%(k-1)!=0)
			{
				ans++;
			}
		}
		cout<<ans<<endl;
	}
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