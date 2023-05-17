#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum;
    cin >> n >> sum;

    vector<int> nums(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // ht means hash_table
    unordered_map<int, int> ht;
    for (int i = 0; i < n; i++)
    {
        auto it = ht.find(sum - nums[i]);
        if(it != ht.end())
        {
            cout << it->second + 1 << " " << i + 1 << "\n";
            return 0;
        }
        ht[nums[i]] = i;
    }

    cout << "IMPOSSIBLE" << "\n";

    return 0;
}
