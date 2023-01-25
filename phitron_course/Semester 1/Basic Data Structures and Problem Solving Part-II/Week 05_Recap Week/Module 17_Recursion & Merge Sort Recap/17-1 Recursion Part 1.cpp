/*
1. Recursion and Merge Sort
2. Practice Problem
3. Merge Sort
-> n! calculate
-> n! = 1.2.3.4....n
-> 0! = 1
-> 1! = 1
-> 2! = 1*2 = 2
-> 3! = 1*2*3 -> 6 -> 3*2!
-> 4! = 1*2*3*4 -> 24 -> 4*3!
-> n! = (n-1)! * n
-> f(n) -> n! এর value
-> f(n) = f(n-1) * n = n!
*/

#include<bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    if(n == 0)
        return 1;
    return factorial(n-1)*n;
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << "\n";

    return 0;
}
