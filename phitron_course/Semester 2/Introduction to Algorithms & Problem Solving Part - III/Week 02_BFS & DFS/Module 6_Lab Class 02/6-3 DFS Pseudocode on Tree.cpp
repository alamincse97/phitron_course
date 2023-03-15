// binary tree
void dfs(int node){

    cout << node << endl;

    // base case

    if node does not have any child:
            return

    // general case
    dfs(node.left_child);
    dfs(node.right_child);
}

// tree
void dfs(int node){

    cout << node << endl;

    // base case

    if node does not have any child:
            return

    // general case
    for all childs of node:
            dfs(child);
}
