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

bool solve()
{
    int n;
    cin>>n;
    int ans=0,in;
    vector<int>arr;

    for(int i=1;i<=20;i++)
    {
        cout<<"1"<<" "<<(1<<i)<<endl;
        cout.flush();
        cin>>in;
        arr.push_back(in);
    }
    reverse(all(arr));
    int sz=arr.size();
    int sum=arr[0]-n*(1<<20);
    for(int i=1;i<sz;i++)
    {
        if(arr[i]<sum)
        {
            arr[i]=(n+(sum-arr[i])/(1<<(sz-i)))/2;
        }
        else
        { 
            arr[i]=(n-(arr[i]-sum)/(1<<(sz-i)))/2;
        }
    }
    if(sum&1)ans++;

    for(int i=1;i<sz;i++){
        if(arr[i]&1)
        {
            ans+=1<<(arr.size()-i);
        }
    }
    cout<<"2"<<" "<<ans;
    cout<<endl;
    cout.flush();
    cin>>in;
    if(in==1)
        return true;

    return false;
}

int main()
{
    fast;
    int tc = 1;
    IN tc;
    while (tc--)
    {
        if(solve())
        {}
        else
            break;
    }
    cout<<endl;
    cout.flush();
    return 0;
}