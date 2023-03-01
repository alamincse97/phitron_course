#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string, int> mp;
    for( int i=0; i<n; i++ )
    {
        string wor;
        cin>>wor;

        if(mp.count(wor) == 0)
            cout<<-1<<"\n";
        else
            cout<<mp[wor]<<"\n";

        mp[wor] = i;
    }

    return 0;
}
