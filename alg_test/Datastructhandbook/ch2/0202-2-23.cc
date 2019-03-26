/*
input two arrays  find the  k  's number
example1:
input : 
    a = {1,2,3,4,5,6,}
    b ={7,8,9}
find the  8 sit number
output:
    8 sit is 8
*/


#include<stdio.h>
#define MAXSIZE 327927


T Topk(T a[], int n, T b[],int m, int k)
{
    int i = 0,j=0,num=0;
    while(i<n && j<m)
    {
        num++;
        if(a[i] < b[j])
        {
            if(num == k)
                return a[i];
            i++;
        }
        else
        {
            if(num == k)
                return b[j];
            i++;
        }
    }
        if(num < k)
        {
            if(i < n)
                return a[k-num+i-1];
            if(j<m)
                return b[k-num+j-i];
        }
}
