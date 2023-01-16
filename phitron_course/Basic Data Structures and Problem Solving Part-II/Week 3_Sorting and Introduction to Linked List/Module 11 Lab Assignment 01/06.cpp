#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return true;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    if (binarySearch(arr, 0, n - 1, k))
    {
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (arr[i] == k && arr[j] == k)
            {
                cout << "YES" << endl;
                return 0;
            }
            if (arr[i] != k)
                i++;
            if (arr[j] != k)
                j--;
        }
        cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

