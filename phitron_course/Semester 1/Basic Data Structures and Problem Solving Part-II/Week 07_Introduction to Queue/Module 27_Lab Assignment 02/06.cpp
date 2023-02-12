#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin>>s;

    deque<char> deq;

    for( int i=0; i<s.size(); i++ )
    {
        deq.push_back( s[i] );
    }

    int palindrome = 1;
    if( deq.size() == 1 )
    {
        palindrome = 1;
    }
    else if( deq.size() > 1 )
    {
        while( deq.size() > 1 )
        {
            if( deq.front() == deq.back() )
            {
                deq.pop_back();
                deq.pop_front();
            }
            else
            {
                palindrome = 0;
                break;
            }
        }
    }

    palindrome == 1 ? cout<<"Yes\n" : cout<<"No\n";

    return 0;
}
