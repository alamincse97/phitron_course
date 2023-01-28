#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, x, min;
    char c;

    scanf("%d", &t);
    while(t--){
        scanf("%d%c", &x, &c);
        if(x < 60){
            min = (60 - x) + 40 + 60;
        }
        else if(x < 80){
            min = 2*(80-x) + 60;
        }else {
            min = 3*(100-x);
        }
        printf("%d minutes\n", min);
        min = 0;
    }

    return 0;
}
