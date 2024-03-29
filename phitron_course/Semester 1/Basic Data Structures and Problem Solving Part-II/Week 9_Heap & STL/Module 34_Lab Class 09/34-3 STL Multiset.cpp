/*
1. Values sorted
Multiset
-> insert -> O(logn)
-> erase -> O(logn)
-> find -> O(logn)
-> print -> O(n)
-> size -> O(1)
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    multiset<int> a;

    //Insert O(logn)
    a.insert(5);
    a.insert(7);
    a.insert(4);
    a.insert(3);
    a.insert(4);
    a.insert(7);

    //Print O(n)
    cout << "Printing the multiset\n";
    for(auto it:a)
        cout << it << " ";
    cout << "\n";

    //Size O(1)
    cout << "Size of multiset : " << a.size() << "\n";

    //Erase O(logn)
    //Erase all occurrence
    a.erase(4);
    cout << "Printing the multiset after erasing 4\n";
    for(auto it:a)
        cout << it << " ";
    cout << "\n";

    //erase a single occurrence
    a.erase(a.find(7));
    cout << "Printing the multiset after erasing 7\n";

    for(auto it:a)
        cout << it << " ";

    cout << "\n";

    //find O(logn)
    if(a.find(5) != a.end())
    {
        cout << "5 Exists\n";
    }
    else{
        cout << "5 doesn't exist\n";
    }

    return 0;
}
