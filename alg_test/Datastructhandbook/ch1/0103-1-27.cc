/**
*show a string all display
*/
#include<stdio.h>

void swap(char &x, char &y)
{
    char tmp =x;
    x = y;
    y = tmp;
}

void Display(char a[], int n)
{
    for(int i =0; i< n;++i)
        printf("%c", a[i]);
    printf("\n");
}

void Perm(char a[], int k, int n)
{
    int i;
    if(k == n-1)
        Display(a,n);
    else
    {
        for(i = k; i< n; i++)
        {
            swap(a[k], a[i]);
            Perm(a,k+1,n);
            swap(a[k],a[i]);
        }
    }
}

int main()
{
    char a[] ="abc";
    printf("all the Displays of %s is :\n", a);
    Perm(a,0,3);
}