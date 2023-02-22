/*
1. STL-> Standart template library
-> vector
-> stack
-> queue
-> deque
-> priority queue

-> set
sorted order thakbe kono number doubliket thakbe na.
a) sorted
b) value distinct
-> multiset
-> map
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<int> st;

    //insert

    st.insert(5);
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(4);

    //print

    for(auto i : st)
        cout << i << " ";
    cout << "\n";

    cout << st.size() << "\n";

    return 0;
}
