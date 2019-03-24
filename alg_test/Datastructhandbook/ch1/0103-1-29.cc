/** find any numbers in N*
show all the displays of  the numbers 
example 1:
    select  1, 3, 4 from array a = {1,2,3,4,5,6}
    display {1, 3, ,4}, {1,4,3}, {3, 1, 4},{4,3,1},{4,1,3},{4,3,1}
*/
#include <stdio.h>
#define MaxSize 10;
int n,r;
void Dispaly(int a[])
{
    for(int j=0; j < r; j++)
        printf(" %d",a[j]);
    printf("\n");
}

void Comb(int a[], int n, int r)
{
    for(int i=n; i>=r;i--)
    {
        a[r-1] = i;
        if(r>1)
            Comb(a,i-1,r-1);
        else
            Dispaly(a);
    }
}

int main()
{   
    int a[MaxSize];
    printf("input n , r (r<=n):");
    scanf("%d, %d",&n, &r);
    printf("%d all the displays is :\n",n,r);
    Comb(a,n,r);
    printf("\n");
}