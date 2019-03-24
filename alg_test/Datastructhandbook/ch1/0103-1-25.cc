/* 
input : 4,0,2,2,1,0,2
output: false

input: 2,1,3,1,1,0
output: true
*/
#include <stdio.h>
bool Jump(int a[], int n, int position)
{
    int steps = a[position];
    if(position == n-1 && steps == 0)
        return true;
    else if (position < n-1 && steps == 0)
        return false;
    else Jump(a,n,postion+steps);
}

void main()
{
    int a[] = {2,1,3,1,1,0}, n= 6;
    printf("a : %d\n", Jump(a ,n, 0));
    int b[] = {4, 2, 2, 1, 0}, n= 6;
    printf("b : %d\n", Jump(b, n, 0));
}