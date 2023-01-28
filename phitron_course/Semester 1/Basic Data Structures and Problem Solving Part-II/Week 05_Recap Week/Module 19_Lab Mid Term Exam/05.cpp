#include <iostream>
using namespace std;

int maxElement(int arr[], int n, int max)
{
    if (n == 0)
        return max;

    if (arr[n-1] > max)
        max = arr[n-1];

    return maxElement(arr, n-1, max);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << maxElement(arr, n, arr[0]) << endl;

    return 0;
}

