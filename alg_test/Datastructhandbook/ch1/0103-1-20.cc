/**
make a array reverse
input  a = {1,2,3,4,5}
output a = {5,4,3,2,1}
*/
#include<stdio.h>
void swap(int &x, int &y)
{
    int tmp =x;
    x=y;
    y=tmp;
}

void Reverse(int a[], int low, int low, int high)
{
    int temp;
    if(low >= high) return;
    else if(low < high)
    {
        swap(a[low], a[high]);
        Reverse(a, low+1, high-1);
    }
}
int main()
{
    int a[] = {1,2,3,4,5,6};
    int n =10;
    Reverse(a , 0, n-1);
    for(int i = 0; i < n; ++i) printf("%d", a[i]);
    printf("\n");
}