/*
Steps -
1) Take input/initialization part
2) Find the largest element from the string (string er khettre largest element is z(Roll number 26)
3) LargestElement + 1 size er akta array niya setake 0 diya fill kortam
4) String traverse kora frequency array er corresponding location increment kore dilam
5) Total koita character ache tar count ber kora.
6) Every time next largest value and tar corresponding character filter kore niya ashte hbe
*/
#include<stdio.h>

int main()
{
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int n = strlen(str), largestElement = 26;

    int freq[largestElement + 1];

    for(int i=0; i<= largestElement; i++)
    {
        freq[i] = 0;
    }
    int total = 0;

    for(int i=0; i<n; i++)
    {
        freq[(str[i] - 'a') + 1]++;
    }
    // total character sum ber kora
    for(int i=1; i<=26; i++)
    {
    if(freq[i] >= 1)
    {
        total++;
    }
}
    // next gretest value ber korchi
    int nxt;

    while(nxt != total)
    {
        int max = -1, index = -1;
        char ch;

        for(int i=1; i<=26; i++)
        {
            if(freq[i] > max)
            {
                max = freq[i];
                ch = i+96;
                index = i;
            }
        }

        for(int i=1; i<= max; i++)
        {
            printf("%c", ch);
        }

        freq[index] = 0;
        nxt++;
    }
    printf("\n");
    return 0;
}
