#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, c, s, sum, i;
    int t;
    scanf("%d", &t);

    for(i=1; i<=t; i++){
        scanf("%d%d%d%d", &s,&a,&b,&c);
        sum = (a+b+c);
        printf("%d\n", (s-sum));
    }
    return 0;
}

