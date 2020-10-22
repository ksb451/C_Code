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
	ll n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];

    ll curr = arr[0];
	if(count(all(arr),curr)==n)
	{
		cout<<-1<<endl;
	}
	else{
		ll max=*max_element(all(arr));
		for(int i=0;i<n;i++)
		{
			if(arr[i]==max)
			{
			if(i==0)
			{
				if(arr[i+1]<max)
				{
					cout<<i+1<<endl;
					return;
				}
			}
			else if(i==n-1){
				if(arr[i-1]<max)
				{
					cout<<i+1<<endl;
					return;
				}
			}
			else{
				if(arr[i+1]<max || arr[i-1]<max)
				{
					cout<<i+1<<endl;
					return;
				}
			}
			}
		}
	}
	return;
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