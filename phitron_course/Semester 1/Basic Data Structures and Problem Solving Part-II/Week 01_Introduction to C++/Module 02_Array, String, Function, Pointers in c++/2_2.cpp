/*#include<bits/stdc++.h>

using namespace std;

string erase_first_last(string s)
{
    s.erase(s.begin());
    s.pop_back();

    return s;
}

int main()
{
    string s;
    cin >> s;
    string ans = erase_first_last(s);

    cout << s << "\n";
    cout << ans << "\n";
    return 0;
}
*/
/*
#include<bits/stdc++.h>

using namespace std;

void erase_first_last2(string &s)
{
    s.erase(s.begin());
    s.pop_back();
    cout << "In function s = " << s << "\n";
}
int main()
{
    string s;
    cin >> s;

    erase_first_last2(s);
    cout << s << "\n";

    return 0;
}
*/
// swap
#include<bits/stdc++.h>

using namespace std;

void Swap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
    /*
    x = 4, y = 5

    z = x, z = 4
    x = y x = 5
    y = z y = 4
    */
}

int main()
{
    int a, b;
    cin >> a >> b;
    Swap(a, b);
    cout << a << " " << b << "\n";
    return 0;
}
