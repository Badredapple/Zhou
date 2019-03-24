/**
    input  a = 12345
    output b = {1,2,3,4,5}
*/
#include <stdio.h>

void Convert(int n, int a[], int &k)
{
    if(n >= 0 && n <= 9)
    {
        a[k] = n;
        k++;
    }
    else
    {
        Convert(n/10,a,k);
        a[k] = n%10;
        k++;
    }
}
int main()
{
    int n = 1234567,k=0,i;
    int a[100];
    Convert(n, a, k);
    printf("%d => ",n);
    for(i=0; i<k; ++i)
        printf("%d", a[i]);
    printf("\n");
}