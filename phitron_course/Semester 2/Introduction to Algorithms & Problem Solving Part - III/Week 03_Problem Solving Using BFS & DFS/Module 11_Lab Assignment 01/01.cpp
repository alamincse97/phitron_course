#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> adj_list[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int val;
            cin >> val;
            if (val == 1)
                adj_list[i].push_back(j);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << ": ";
        for (int j = 0; j <adj_list[i].size(); j++)
        {
            cout<<adj_list[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";

    return 0;
}
