//**sn0wrus**//
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);                   \
    cin.tie(NULL);
#define write(a)          \
    for (auto x : a)      \
    {                     \
        cout << x << " "; \
    }                     \
    cout << endl;
#define read(a)       \
    for (auto &x : a) \
    {                 \
        cin >> x;     \
    }
#define IN cin >>
#define OUT cout <<
#define endl "\n"
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define fi first;
#define se second;

using ll = long long int;
using ld = long double;
using pll = pair<ll, ll>;
using pii = pair<int, int>;
using plll  = pair<ll,pll>;
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

    ll ans=1;
	ll prev = 1;
	ll cnt=0;
	ll curr=0;
	ll i =1;
	//cout<<1<<endl;
	while(i<n)
	{

		if(cnt<prev)
		{
			ll x=0;
			while(i<n-1&& arr[i+1]>arr[i])
			{
				//cout<<arr[i]<<" ";
				i++;
				x++;
			}
			//cout<<arr[i]<<" ";
			i++;
			x++;
			curr+=x;
			cnt++;
			//cout<<"    ";
		}
		else if(cnt==prev)
		{
			//cout<<endl;
			if(i==n)
			{
				break;
			}
			ans++;
			cnt=0;
			prev=curr;
			curr=0;
		}
	}
	//cout<<endl;
	cout<<ans<<endl;
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