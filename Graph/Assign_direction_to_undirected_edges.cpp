// You are given a graph consisting of n vertices and m edges.It is not guaranteed that the given graph is connected.Some edges are already directed and you can't change their direction. Other edges are undirected and you have to choose some direction for all these edges.

//     You have to direct undirected edges in such a way that the resulting graph is directed and
//     acyclic(i.e.the graph with all edges directed and having no directed cycles).Note that you have to direct all undirected edges.

//     You have to answer t independent test cases.

//https://codeforces.com/contest/1385/problem/E

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> liste(m + 1);
    vector<bool> direct(m + 1);
    vector<vector<int>> e(n + 1);
    vector<int> deg(n + 1, 0);
    for (int i = 1; i <= m; ++i)
    {
        int t, u, v;
        cin >> t >> u >> v;
        direct[i] = (t == 1);
        liste[i].first = u;
        liste[i].second = v;
        if (t)
        {
            e[u].push_back(i);
            ++deg[v];
        }
    }
    int timer = 0;
    vector<int> stt(n + 1, 0);
    queue<int> q;
    for (int i = 1; i <= n; ++i)
    {
        if (deg[i] == 0)
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        stt[u] = ++timer;
        for (int i : e[u])
        {
            int v = liste[i].second;
            --deg[v];
            if (deg[v] == 0)
            {
                q.push(v);
            }
        }
    }
    if (timer != n)
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 1; i <= m; ++i)
    {
        if (!direct[i])
        {
            int u = liste[i].first;
            int v = liste[i].second;
            if (stt[u] > stt[v])
            {
                swap(liste[i].first, liste[i].second);
            }
        }
    }
    cout << "YES" << endl;
    for (int i = 1; i <= m; ++i)
    {
        cout << liste[i].first << " " << liste[i].second << endl;
    }
}

int main()
{
    int t = 1;
    cin >> t;
    for (int it = 1; it <= t; ++it)
    {
        solve();
    }
    return 0;
}