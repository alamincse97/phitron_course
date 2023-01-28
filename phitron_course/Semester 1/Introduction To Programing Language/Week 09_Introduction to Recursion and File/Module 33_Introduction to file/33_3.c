#include<stdio.h>

int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input.txt", "r");
    if(inputFile == NULL)
    {
        printf("Not found");
        return 0;
    }
    outputFile = fopen("output.txt", "w");

    int n;
    fscanf(inputFile, "%d", &n);
    int sum=0;
    for(int i=0; i<n; i++)
    {
        int a;
        fscanf(inputFile, "%d", &a);
        sum+=a;
    }
    fprintf(outputFile, "Sum -> %d", sum);
    return 0;
}
