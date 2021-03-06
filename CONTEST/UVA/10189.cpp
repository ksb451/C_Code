/******************************************
* AUTHOR : Keshab Agrawal *
* NICK : sn0wrus *
******************************************/
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

int dir8[8][2]={{1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
int dir4[4][2]={{1,0},{0,1},{-1,0},{0,-1}};

void solve()
{
	ll n,m;
	int cs=0;
    while(cin>>n>>m)
    {
    	if(n==0&&m==0)return;
    	vector<string>arr(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin>>arr[i];
    	}
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<m;j++)
    		{
    			if(arr[i][j]=='.')
    			{
    				arr[i][j]='0';
    			}
    		}
    	}
		for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<m;j++)
    		{
    			if(arr[i][j]=='*')
    			{
    				for(int k=0;k<8;k++)
    				{
    					int x=i+dir8[k][0];
    					int y=j+dir8[k][1];
    					if(x>=0&&x<n&&y>=0&&y<m)
    					{
    						if(arr[x][y]!='*')
    						{
    							arr[x][y]+=1;
    						}
    					}
    				}
    			}
    		}
    	}


    	cout<<"Field #"<<++cs<<":"<<endl;
    	for(int i=0;i<n;i++)
    	{
    		cout<<arr[i]<<endl;
    	}
    	cout<<endl;
    }
    return;
}

int main()
{
    solve();
    return 0;
}