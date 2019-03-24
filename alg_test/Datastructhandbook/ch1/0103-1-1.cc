/*
find  max number and min number in a array

*/
#include <stdio.h>
typedef int T;
void Maxmin(T a[], int l, int r, T& max, T& min)
{
    int m;
    T lmax, lmin, rmax, rmin;
    if(l == r)
    {
        max = a[l];
        min = a[l];
        return;
    }
    else if(l+1 == r)
    {
        max = a[l] > a[r] ? a[l]:a[r];
        min = a[l] > a[r] ? a[l]:a[r];
        return;
    }
    else
    {
        m = (l+r)/2;
        Maxmin(a, l, m, lmax, lmin);
        Maxmin(a, m+1, r, rmax, rmin);
        max = lmax>rmax?lmax:rmax;
        min = lmin<rmin?lmin:rmin;
        return;
    }
}

int main()
{
    T a[] = { 2,5,8,3,1,8,1,6,4};
    int n = 9;
    T max, min;
    Maxmin(a, 0, n-1, max,min);
    printf("Max = %d, Min = %d\n", max,min);
    return 0;
}