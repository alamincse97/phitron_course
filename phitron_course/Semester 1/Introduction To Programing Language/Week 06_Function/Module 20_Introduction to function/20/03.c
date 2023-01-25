#include<stdio.h>

int largest_number(int a, int b, int c)
{
    if(a>b && a>c){
        printf("%d is largest\n", a);
    }
    else if(b>c){
        printf("%d is largest\n", b);
    }
    else{
        printf("%d is largest\n", c);
    }

}

int main()
{
    int a, b, c;

    printf("Enter an three integer: \n");
    scanf("%d%d%d", &a, &b, &c);

    largest_number(a, b, c);

    return 0;
}
