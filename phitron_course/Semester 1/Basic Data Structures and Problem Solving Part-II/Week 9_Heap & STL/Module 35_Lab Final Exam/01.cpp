#include <bits/stdc++.h>
using namespace std;

void Merge( string str[], int left, int mid, int right )
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    string str1[n1], str2[n2];

    for( int i=0; i<n1; i++ )
        str1[i] = str[left+i];

    for( int i=0; i<n2; i++ )
        str2[i] = str[i+mid+1];

    int idx1=0, idx2=0, idxT=left;
    while( ( idx1 < n1 ) && ( idx2< n2 ) )
    {
        if( str1[idx1] < str2[idx2] )
        {
            str[idxT] = str1[idx1];
            idx1++;
            idxT++;
        }
        else
        {
            str[idxT] = str2[idx2];
            idx2++;
            idxT++;
        }
    }
    while( idx1 < n1 )
    {
        str[idxT] = str1[idx1];
        idx1++;
        idxT++;
    }
    while( idx2 < n2 )
    {
        str[idxT] = str2[idx2];
        idx2++;
        idxT++;
    }
}

void merge_Sort( string str[], int left, int right )
{
    if( left<right )
    {
        int mid = ( left+right )/2;
        merge_Sort( str, left, mid );
        merge_Sort( str, mid+1, right );
        Merge( str, left, mid, right );
    }
}

int main()
{
    int n;
    cin>>n;

    string a[n];
    for( int i=0; i<n; i++ )
    {
        cin>>a[i];
    }

    merge_Sort( a, 0, n-1 );

    for( int i=0; i<n; i++ )
    {
        cout<<a[i]<<" ";
    }
}
