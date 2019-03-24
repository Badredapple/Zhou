/* chechk array is  reverse ?
1.
    input  a = {1,3,4,4,3,1}  
    ouput yes
2. 
    input a ={1,2,4,5}
    output no
    */
#include <stdio.h>
bool Cycle(char a[], int low, int high)
{   
    if(low >= high)
        return true;
    else if(low < high)
        return(a[low] == a[high] && Cycle(a,low+1,high-1));
}

int main()
{
    char a[] = "abbbac";
    int n = 5;
    printf("%s%s cycle\n", a, (Cycle(a,0,n-1)? "yes":"no"));
}