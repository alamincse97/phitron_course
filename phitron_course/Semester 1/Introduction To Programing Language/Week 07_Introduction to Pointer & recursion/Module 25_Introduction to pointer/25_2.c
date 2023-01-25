#include<stdio.h>

int main()
{/*
   int a;
    printf("%d\n", &a);
    printf("%p", &a);

    */

    int a=12345;
    int* p;

    p = &a;

    printf("%p\n", p);

    printf("%d\n", *p);

    return 0;
}
