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
		vector<int> arr(n);
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(all(arr));
		int i=0, j = n/2;
//		if(n % 2 == 0)
//			cout<<(n/2)-1<<endl;
//		else
//			cout<<n/2<<endl;
		vector<int> ans;
		for(int k=0; k<n; k++){
			if(k % 2 == 0){
				ans.pb(arr[j]);
				j++;
			}
			else{
				ans.pb(arr[i]);
				i++;
			}
		}
		int count = 0;
		for(int i=1; i<n; i+=2){
			if(ans[i-1] > ans[i] && ans[i+1] > ans[i])
				count++;
		}
		cout<<count<<endl;
		for(int i=0; i<n; i++)
			cout<<ans[i]<<" ";
		cout<<endl;
}

int main()
{
    fast;
    ll tc = 1;
    //IN tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}