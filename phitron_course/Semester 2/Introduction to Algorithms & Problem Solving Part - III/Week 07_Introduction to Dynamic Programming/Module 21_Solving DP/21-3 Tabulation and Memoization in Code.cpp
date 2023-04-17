# DP Steps
============
- Define state
- Identify the recursive equation from the smaller problems
- Define base case


# Memoization-Method (recursive)
===============================

fun(n, a, b, c, ...) {
    // 1. handle base case

    // 2. if current state is already solved, return the result

    // 3. calculate the result from smaller sub-problems
}


# Tabulation-Method (iterative)
==============================

main() {

    // 1. handle base case

    // 2. loop through the states
        // 2.1. and calculate the answer from smaller sub-problems
}

#include<bits/stdc++.h>
using namespace std;
const int N = 101;
/*

- fib(n) -> calculates the nth fibonacci number
- fib(n) = fib(n-1) + fib(n-2)
- fib(1) = 1, fib(2) = 1


*/

int dp[N]; // dp array

int fib(int n) {
    // 1. base case
    if(n <= 2) return 1;

    // 2. check if current state is already solved
    if(dp[n] != -1) { 
        return dp[n];
    }

    // 3. calculate from smaller sub-problems
    int ans = fib(n-1) + fib(n-2);
    dp[n] = ans; 
    return ans;
}

int main() {

    int n;
    cin >> n;

    for(int i = 1 ; i <= n ; i++) {
        dp[i] = -1;  // mark all states as unvisited
    }

    cout<< fib(n) << endl;
    return 0;
}

// 1, 1, 2, 3, 5, 8, 13, 21

#include<bits/stdc++.h>
using namespace std;
const int N = 101;
/*

- fib(n) -> calculates the nth fibonacci number
- fib(n) = fib(n-1) + fib(n-2)
- fib(1) = 1, fib(2) = 1

*/

int dp[N];

int main() {
    int n;
    cin >> n;

    // 1. base case
    dp[1] = 1;
    dp[2] = 1;

    // 2. loop through the states
    for(int i = 3 ; i <= n ; i++) {
        // 2.1. and calculate the answer from smaller sub-problems
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n] << endl;
    return 0;
}