//In Genaral

// graph
// visited array

void dfs(int node){
    cout << node << endl;
    visited[node] = 1;

    for all adj_node of node;
        if visited[adj_node] == 0;
            dfs(adj_node)
}

dfs(src)

// Time Complexity:-
