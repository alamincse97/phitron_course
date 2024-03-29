#include <bits/stdc++.h>
using namespace std;

const int N = 2e5;
vector<int> adj_list[N];
int visited[N];

bool bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = 1;

    while(!q.empty())
    {
        int head = q.front();
        q.pop();

        for(int child: adj_list[head])
        {
            if(visited[child] == 0)
            {
                visited[child] = 1;
                q.push(child);
            }
            else if (visited[child] == 1)
            {
                visited[child] = 2;
            }
            else if (visited[child] == 2)
            {
                return true;
            }
        }
    }
    visited[src] = 3;
    return false;
}

int main()
{

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    bool is_cyclic = false;
    int root = 1;
    is_cyclic = bfs(root);

    if(is_cyclic)
    {
        cout << "Cycle Exists" << "\n";
    }
    else
    {
        cout << "No cycle" << "\n";
    }

    return 0;
}
