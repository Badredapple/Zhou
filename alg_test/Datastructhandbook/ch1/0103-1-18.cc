/**
input  output
1       1
12     1122
123    111222333
*/
#include <stdio.h>
void fun(int n)
{
    int d;
    if(n != 0)
    {
        d = n%10;
        n = n/10;
        fun(n);
        printf("%d%d",d,d);
    }
}
int main()
{
    int n;
    printf("n:");
    scanf("%d", &n);
    fun(n);
    printf("\n");
}