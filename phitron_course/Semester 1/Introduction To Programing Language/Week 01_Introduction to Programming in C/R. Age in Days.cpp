#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int years, months, days;

    years = (int)n / 365;

    n = n - (365 * years);

    months = (int)n / 30;

    days = (int) n - (months*30);

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}
