#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < n; i++)
    {
        if (i < a - 1 || i > b - 1)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}

