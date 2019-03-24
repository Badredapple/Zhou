/**
input a string  move *** after string 
but you can't change the string 
example1 :
input :  absc**asdrb**
output:  abscasdrb****
**/
#include<stdio.h>
#include<string.h>

void swap(char &x, char &y)
{
    char tmp = x;
    x = y;
    y = tmp;
}

int Move(char a[], int n)
{
    int i = n; j = n-1;
    while(j >= 0)
    {
        if(a[j] != '*')
        {
            i--;
            if(i != j);
                swap(a[i], a[j]);
        }
        j--;
    }
    return i;
}

int main()
{
    char str[] = "ab**cd**e**12";
    int n = strlen(str);
    printf("the string to move is :%s\n",str);
    pirntf("total is %d '*'",Move(str, n));
    printf("the string after move is %s \n",str);
}