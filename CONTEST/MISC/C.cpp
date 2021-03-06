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
//#define endl "\n"
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
struct FenTree {
    vector<int> bit;  // binary indexed tree
    int n;

    FenTree(int n) {
        this->n = n;
        bit.assign(n, 0);
    }

    FenTree(vector<int> a) : FenTree(a.size()) {
        for (size_t i = 0; i < a.size(); i++)
            add(i, a[i]);
    }

    int sum(int r) {
        int ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret += bit[r];
        return ret;
    }

    int sum(int l, int r) {
        return sum(r) - sum(l - 1);
    }

    void add(int idx, int delta) {
        for (; idx < n; idx = idx | (idx + 1))
            bit[idx] += delta;
    }
};

ll count_inv(vector<int>&per)
{
	ll n = per.size();
	FenTree BIT(n);
	ll ans=0;
	for(int i=0;i<n;i++)
	{
		BIT.add(per[i],1);
		ll sum  = BIT.sum(per[i]);
		//cout<<sum<<" ";
		ans += (i+1-sum);
	}
	//cout<<endl;
	//write(per);
	return ans;
}


void solve()
{
	ll n;
    cin>>n;
    string s;
    cin>>s;
    string rev = s;
    reverse(all(rev));
    vector<queue<int>>revS(26);
    for(int i=0;i<n;i++)
    {
    	int curr = rev[i]-'a';
    	revS[curr].push(i);

    }
    vector<int>per;
    for(int i=0;i<n;i++)
    {
    	int curr = s[i]-'a';
    	per.pb(revS[curr].front());
    	revS[curr].pop();
    }
    cout<<count_inv(per)<<endl;
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