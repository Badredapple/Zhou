/*
input :  ABCDabcd
output:  AaBbCcDd


*/
#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void Reverse(int a[], int  start, int end)
{
    while(start < end)
    {
        swap(a[start], a[end]);
        ++start;
        --end;
    }
}

void LeftRotate(int a[], int m, int n)
{
    Reverse(a, 1, m);
    Reverse(a, m+1, n);
    Reverse(a, 1, n);
}

void CycleLeader(int a[], int start, int n)
{
    int pre = a[start];
    int mod = 2*n + 1;
    int next = start*2%mod;
    while(next != start)
    {
        swap(pre, a[next]);
        next = 2*next%mod;
    }
    a[start] = pre;
}

void PerfectShuffle(int a[], int n)
{
    while(n >= 1)
    {
        int i,k = 0;
        int r = 3;
        while(r-1 <= 2*n)
        {
            r*=3;
            ++k;
        }
        int m = (r/3-1)/2;
        LeftRotate(a+m, n-m, n);
        for(int i = 0, j = 1; i<k; ++i,j*=3)
            CycleLeader(a, j, m);
        a+=2*m;
        n-=m;
    }
}

int main()
{
    int a[] = {1,3,5,7,9,11,2,4,6,8,10,12};
    int i,n=5;
    std::cout<<"input :";
    for(i = 0; i <= 2*n+1;++i) 
        std::cout<<a[i]<<" ";
    std::cout<<endl;
    PerfectShuffle(a,n);
    std::cout<<"output :";
    for(i= 0; i <= 2*n+1; ++i)
        std::cout<<a[i]<<" ";
    std::cout<<endl;
    return 0;
}