/**
 n queen question

*/
#include <stdio.h>
#include <stdlib.h>

const int N = 20;
int q[N];
int count = 0;

void Display(int n)
{
    count++;
    int i;
    printf("The %d solution is:",count);
    for(int i =1; i <= n; ++i)
        printf("(%d,%d)",i,q[i]);
    printf("\n");
}

bool place(int k ,int j)
{
    int i =1;
    while(i<k)
    {
        if((q[i] == j) || (abs(q[i] - j) == abs(i-k)))
            return false;
        i++;
    }
    return true;
}

void queen(int k, int n)
{
    int j;
    if(k > n)
        Display(n);
    else
    {
        for(int j = 1; j <= n; ++j)
            if(place(k,j))
            {
                q[k] = j;
                queen(k+1,n);
            }
    }
}

int main()
{
    int n;
    printf(" queen question (n<20) n:");
    scanf("%d",&n);
    if(n >20)
        printf("n is too big !");
    else
    {
        printf("all the solution is :\n",n);
        queen(1,n);
        printf("\n");
    }
}