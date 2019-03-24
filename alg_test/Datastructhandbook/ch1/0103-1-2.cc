/**
* find max number and second number in a array
*/
#include <stdio.h>
#define INF 32767
typedef int T;
void Maxtwo(T a[], int l, int r, T& max1, T& max2)
{
    T lmax1,lmax2,rmax1,rmax2;
    int m;
    if(l == r)
    {
        max1 = a[l];
        max2 = -INF;
        return;
    }
    else if(l+1 == r)
    {
        max1 = a[1]>a[r]? a[1]:a[r];
        max2 = a[1]<a[r]? a[1]:a[r];
        return;
    }
    else
    {
        m = (l+r)/2;
        Maxtwo(a, 1, m, lmax1, lmax2);
        Maxtwo(a, m+1, r, rmax1, rmax2);
        max2 = lmax2 > rmax2? lmax2:rmax2;
        if(lmax1>rmax1)
        {
            max1 = lmax1;
            max2 = max2 > rmax1? max2:rmax1;
        }
        else
        {
            max1 = rmax1;
            max2 = max2>lmax1?max2:lmax1;
        }
        return;
    }
}
int main()
{
    T a[] = {2, 5, 8, 3, 1, 7, 1, 6, 4};
    int n =9;
    T max1, max2;
    Maxtwo(a, 0, n-1, max1, max2);
    printf("Max = %d, second max = %d\n", max1,max2);
    return 0;
}