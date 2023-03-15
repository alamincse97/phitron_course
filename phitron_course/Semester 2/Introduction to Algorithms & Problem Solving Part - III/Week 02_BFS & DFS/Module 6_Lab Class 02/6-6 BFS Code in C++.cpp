/*
BFS(graph, source):

- Initiate an array called "visited" and an empty queue "q"
- mark visited[source] = 1 and q.push(source)
- while the queue is not empty:
    - head = q.front()
    - q.pop()
    - print the node "head"
    - for all adjacent nodes of "head":
        - if visited[adj_node] == 0;
            - visited[adj_node] = 1
            - q.push(adj_node)
*/

#include<bits/stdc++.h>

using namespace std;

const int N = 1e5;

int visited[N];

vector<int>adj_list[N];

void bfs(int src){
queue<int>q;

visited[src] = 1;
q.push(src);

while(!q.empty()){
    int head = q.front();
    q.pop();

    cout << head << endl;

    for(int adj_node: adj_list[head]){
        if(visited[adj_node] == 0){
            visited[adj_node] = 1;
            q.push(adj_node);
            }
        }
    }
}
/*
Output -> 0, 1, 5, 2, 4, 3

0-----1----2-----3
      |    |
      |    |
      5----4

# of node -> 6
# of edge -> 6

list of adj nodes ->

6 6

0 1
2 3
1 5
2 4
5 4
1 2

*/

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    for(int i=0; i<edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src = 0;
    bfs(src);
    return 0;
}
