#include <stdio.h>
int main() {
    int n, k, ran, count = 0;

    scanf("%d %d", &n, &k);
    while(n--){
        scanf("%d", &ran);
        if(ran < k){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
