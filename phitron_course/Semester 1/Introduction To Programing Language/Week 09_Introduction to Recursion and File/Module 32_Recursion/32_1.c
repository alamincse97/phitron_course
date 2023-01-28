/*
Recursion
1. Print from 1 to n;
2. Print from n to 1;
3. Reverse Using Recursion
4. Sum of n integers
5. Recursion with Array - I
6. Recursion with Array - II
*/
// 1. print from 1 to n;
// call stack
// আমি ১ টা কাজ করবো, বাকি কাজ recursion করবে। কিভাবে করবে আগে চিন্তা করবে না।

#include<stdio.h>

void solve(int i, int n)
{
    if(i > n)return;
    printf("%d\n", i);
    solve(i+1, n);
}
int main()
{
    int n;
    scanf("%d", &n);
    solve(1, n);
    return 0;
}
