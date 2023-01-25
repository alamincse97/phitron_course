#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a;

    for(int i=0; i<10; i++)
    {
        cout << "Before push "<< a.size() << endl;
        a.push_back(i);
        cout << "after push " << a.size() << endl;
    }
    a.insert(a.begin() + 0, 100);
    for(int i=0; i<10; i++)
    {
        cout << a[i] << "\n";
    }
    return 0;
}
