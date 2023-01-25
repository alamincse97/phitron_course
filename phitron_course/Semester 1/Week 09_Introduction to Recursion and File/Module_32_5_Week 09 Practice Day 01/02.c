#include <stdio.h>

int sumOfLastDigits(int a[], int last_index){
    int rem = a[last_index] % 10;
    if(last_index == 0)
        return rem;
    return rem + sumOfLastDigits(a, last_index-1);
}

int main(){
    int n;
    scanf("%d", &n);
    
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int sum = sumOfLastDigits(a, n-1);
    printf("sum = %d", sum);
    return 0;
}
