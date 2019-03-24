/**
find the sum max number and min number in an array:
example1 :
    a = {2,3,3,5,3,6,3,5,1}
    sum a = 5+6 = 11
example2 :
    b = {4,5,1,3,2,5,1,7,}
    sum b = 5 + 7 = 12
*/
#include <stdio.h>
#define MAX 100
void MaxMin(int a[], int n, int &max, int &min)
{
    max=min=a[0];
    for(int i=1;i<n;++i)
    {
        if(a[i] > max) max = a[i];
        else if(a[i]<min) min = a[i];
    }
}

int main()
{
    int a[] = {2,3,4,5,1,3,2,6,};
    int n = 3;
    MaxMin(a,n,max,min);
    printf("the solution is :\n");
    printf("max = %d, min = %d\n",max,min);
    return 0;
}