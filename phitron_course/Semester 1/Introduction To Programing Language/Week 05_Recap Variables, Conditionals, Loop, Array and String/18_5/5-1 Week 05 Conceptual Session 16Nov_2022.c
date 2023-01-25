/*1.// Frequency Array

#include<stdio.h>
#include<limits.h>

int main()
{
    int a[8] = {5, 4, 5, 7, 2, 1, 4, 2};

    int max = INT_MIN;

    // maximum value identifier
    for(int i=0; i<8; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    //maximum value print
    //printf("%d", max);

    int freq[max + 1]; // initial value 0;

    for(int i=0; i<=max; i++)
    {
        freq[i] = 0;
    }
    for(int i = 0; i<8; i++){
        freq[a[i]]++;
    }
    for(int i=0; i <= max; i++)
    {
        //printf("index = %d value = %d\n", i, freq[i]);
        //if(freq[i] != 0)
        //  printf("index = %d value = %d\n", i, freq[i]);
        //if(freq[i] != 0)
        //    printf("%d ", i);
        // frequency index print
        if(freq[i] != 0)
        {
            for(int j=1; j<= freq[i]; j++)
                printf("%d ", i);
        }
    }
      printf("\n");
    return 0;
}
*/

// Two pointer techneciqe
// Reverse_Array

#include<stdio.h>

int main()
{
    // input part start
    int size;
    scanf("%d", &size);

    int a[size];

    for(int i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    // input part end
    for(int i=0, j = size - 1; i < size/2; i++, j--)
    {
        // do the swap
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for(int i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
52:53

