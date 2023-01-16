#include <iostream>
#include <algorithm>
using namespace std;

int mergeSort(int arr[], int temp[], int left, int right, int k)
{
    int mid, count = 0;
    if (right > left)
    {
        mid = (right + left) / 2;
        count = mergeSort(arr, temp, left, mid, k);
        count += mergeSort(arr, temp, mid + 1, right, k);
        int i = left, j = mid + 1, t = 0;
        while (i <= mid && j <= right)
        {
            if (arr[i] + arr[j] == k)
            {
                count++;
                i++;
                j++;
            }
            else if (arr[i] < arr[j])
            {
                temp[t++] = arr[i++];
            }
            else
            {
                temp[t++] = arr[j++];
            }
        }
        while (i <= mid)
        {
            temp[t++] = arr[i++];
        }
        while (j <= right)
        {
            temp[t++] = arr[j++];
        }
        t = 0;
        while (left <= right)
        {
            arr[left++] = temp[t++];
        }
    }
    return count;
}

int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> k;
    int temp[n];
    cout << mergeSort(arr, temp, 0, n - 1, k) << endl;
    return 0;
}

