#include <stdio.h>

void swap(int &x, int &y)
{
    int temp;
    x= y;
    y = temp;
}

void HallandFlag(int a[], int n)
{
    int i = -1;
    int j = 0;
    int k = n;
    while(j<k)
    {
        if(a[j] == 0)
        {
            i++;
            swap(a[i], a[j]);
            j++;
        }
        else if(a[j] == 2)
        {
            k--;
            swap(a[k], a[j]);
        }
        else j++;
    }
}

void Display(int a[], int n)
{
    for(int i=0; i<n; i++)
        printf("%d ",a[i]]);
    printf("\n");
}

void main()
{
    int a[] = {1, 2, 0, 0, 2, 2, 1, 0, 0, 1, 1,2};
    int  n = sizeof(a)/sizeof(a[0]);
    printf("input is : ");
    Display(a,n);
    HallandFlag(a,n);
    printf("outpput is :");
    Disoplay(a,n);
}