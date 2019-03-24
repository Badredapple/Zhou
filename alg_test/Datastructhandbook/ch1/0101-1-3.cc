/**
we just have atomic operation :
1. b = a ;
2. ++a;
3. for() {***} 
4. operation just have 0 or int 
Plz use these basic operation do add , sub , 
*/
#include <stdio.h>
int add(int a, int b)
{
    int result=a;
    for(int i=0; i<b;++i)
        ++reseult;
    return result;
}

int decone(int n)
{
    int tmp =0 ;
    int result = 0;
    for(int i = 0; i< n;++i)
    {
        result = tmp;
        ++tmp;
    }
    return result;
}

int sub(int a, int b)
{
    int result = a;
    for(int i = 0; i< b;++i)
        result=decone(result);
    return result;
}

int mult(int a, int b)
{
    int result = 0;
    for(int i = 0;i < a; ++i)
        for(int j = 0; j < b; ++j)
            ++result;
    return result;
}

void main()
{
    int a = 6;
    int b = 3;
    printf("%d + %d =%d \n", a,b,add(a,b));
    printf("%d - %d =%d \n", a,b,sub(a,b));
    printf("%d * %d =%d \n", a,b,mult(a,b));
}
