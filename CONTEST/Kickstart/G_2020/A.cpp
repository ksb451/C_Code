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
    string s;
    cin>>s;
    vector<ll>k;
    vector<ll>ss;
    ll len=s.length();
    for(ll i=0;i<len;i++)
    {
    	if(s.substr(i,4)=="KICK")
    	{
    		k.push_back(i);
    	} 	
		if(s.substr(i,5)=="START")
		{
			ss.push_back(i);
		}
    }
    // write(k);
    // write(ss);
    ll n =ss.size();
    ll curr=0;
    ll ans=0;
    for(int i=0;i<k.size();i++)
    {
    	//cout<<"k"<<k[i]<<endl;
    	while(curr<n && k[i]>ss[curr])
    	{
    		curr++;
    	}
    	//cout<<"curr"<<curr<<endl;
    	ans+=(n-curr);
    }
    cout<<ans<<endl;
   
}

int main()
{
	ios_base::sync_with_stdio(false); 
    cout.tie(NULL);
    cin.tie(NULL);
    ll tc = 1;
    IN tc;
    for (int i = 1; i <= tc; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}