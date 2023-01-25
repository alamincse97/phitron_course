#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x = 10;
    int *y = &x;

    cout << x << "\n";
    cout << y << "\n";
    cout << *y << "\n";

    x = 100;

    cout << x << "\n"; // 100
    cout << y << "\n"; // memory location
    cout << *y << "\n"; // 100

    return 0;
}
