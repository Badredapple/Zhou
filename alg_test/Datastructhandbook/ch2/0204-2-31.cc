/**
example 1:
    intput:   n = 4
    output:   1    2    3    4
              12   13   14   5
              11   16   15   6
              10    9   8    7

*/
#include <stdio.h>
#define N 15
int s[N][N];
int n;

void CreateLevel(int &start, int ix, int iy, int ex, int ey)
{
    if(ix == ex)
        s[ix][iy] = start++;
    else
    {
        int curx = ix;
        int cury = iy;
        while(curx != ex)
        {
            s[iy][curx] = start++;
            curx++;
        }
        while(cury != ey)
        {
            s[cury][ex] = start++;
            cury++;
        }
        while(curx != ix)
        {
            s[ey][curx] = start++;
            curx--;
        }
        while(cury !=iy)
        {
            s[cury][ix] = start++;
            cury--;
        }
    }
}

void spiral1(int n)
{
    int start = 1;
    int ix = 0,iy=0;
    int ex = n-1,ey = n-1;
    while(ix <= ex && iy <=ey)
        CreateLevel(start, ix++, iy++, ex--, ey--);
}

void spiral2(int x, int y, int start, int n)
{
    int i,j;
    if(n <= 0)
        return;
    if( n == 1)
    {
        s[x][y] = start;
        return;
    }
    
    for(i = x; i < x+n-1;++i)
        s[y][i] = start++;
    for(j = y; j <y+n-1;++j)
        s[j][x+n-1] = start++;
    for(i = x+n-1; i>x; i--)
        s[y+n-1][i] = start++;
    for(j=y+n-1; j >y;j--)
        s[j][x] = start++;
    spiral2(x+1, y+1, start, n-2);
    
}

void Display()
{
    int i,j;
    for(int i =0; i<n;++i)
    {
        for(j =0;j<n;++j)
            printf("%4d", s[i][j]);
        printf("\n");
    }
}
int main()
{
    n = 5;
    printf(" use no digui %d :\n",n);
    spiral1(n);
    Display();
    n=4;
    printf("use digui %d :\n",n);
    spiral2(0,0,1,n);
    Display();

}