#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long count = 1, ans = 1;
    string n;
    cin >> n;

    for(int i=0; i< n.length() - 1; i++)
    {
        if(n[i] == n[i+1])
            count++;
        else
            count = 1;
        ans = max(ans, count);
    }
    cout << ans << endl;

    return 0;
}

