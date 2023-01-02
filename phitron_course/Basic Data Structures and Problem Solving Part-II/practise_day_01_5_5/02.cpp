#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int odd=1;

    vector<int> a(n);

    for(int i=0; i<n; i++)
    {
        cin >> a[i];

        if(i % 2 != 0)
            odd*=a[i];
    }
    cout << odd << endl;

    return 0;
}
