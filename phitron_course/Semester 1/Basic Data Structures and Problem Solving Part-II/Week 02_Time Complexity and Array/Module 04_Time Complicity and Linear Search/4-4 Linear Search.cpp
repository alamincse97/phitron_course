/*
Liner Search
Time Complexity:- O(n)
Space / Memory Complexity:- O(n)
7 5
2 4 5 7 5 3 2
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector <int> a(n);

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i] == k)
        {
            cout << "YES\n";
            cout << i << "\n";
            break;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i] == k)
        {
            cout << i << " ";
        }
    }
    cout << "\n";
    return 0;
}
