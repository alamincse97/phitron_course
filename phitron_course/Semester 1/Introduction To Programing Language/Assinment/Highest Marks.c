#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, i, max;
    scanf("%d", &n);

    int arr[n];

    for(i=0; i<n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    max = arr[0];
    for(i=0; i<n; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ", max -arr[i]);
    }
    return 0;
}

