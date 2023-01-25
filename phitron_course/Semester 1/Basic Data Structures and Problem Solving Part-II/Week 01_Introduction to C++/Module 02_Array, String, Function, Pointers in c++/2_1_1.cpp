#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int  sum = 0;
    for(int i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
    cout << sum << endl;
    cout << endl;

    int x = 1;
    for(int i=0; i<n; i++)
    {
        x = x*a[i];
    }
    cout << x << endl;
    return 0;
}

