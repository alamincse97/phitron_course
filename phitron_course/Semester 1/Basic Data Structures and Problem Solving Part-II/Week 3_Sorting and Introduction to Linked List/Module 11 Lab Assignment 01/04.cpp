#include <bits/stdc++.h>

using namespace std;

bool isSubset(int A1[], int A2[], int m, int n) {
    sort(A1, A1 + m);
    sort(A2, A2 + n);
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (A1[i] < A2[j])
            return false;
        else if (A1[i] == A2[j])
            i++;
        j++;
    }
    return (i == m);
}

int main() {
    int m, n;
    cin >> m;
    int A1[m];
    for (int i = 0; i < m; i++)
        cin >> A1[i];
    cin >> n;
    int A2[n];
    for (int i = 0; i < n; i++)
        cin >> A2[i];
    if (isSubset(A1, A2, m, n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

