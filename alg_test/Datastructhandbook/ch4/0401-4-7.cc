/**
	replace the space with "%20" 
example:
	input: "Hello c++ world"
	output: "Hello%20c++%20world"
 example2:
	input: "Mr John Smith"
	output:"Mr%20John%20Smith"
**/

#include <stdio.h>
#include <string.h>
#include <malloc.h>
#define MAX 100

int ReplaceSpace(char *p, int n)
{
	int num = 0, newlength,k,i;
	if(n == 0 ) return 0;
	for(i = 0; i< n; i++)
		if(p[i] == ' ')
			num++;
	newlength = n + num*2;
	p[newlength] = '\0';
	k = newlength -1;
	for(i = n-1; i >= 0; i--)
	{
		if(p[i] == ' ')
		{
			p[k] = '0';
			p[k-1] = '2';
			p[k-2] = '%';
			k=k-3;
		}
		else if(p[i] != '\0');
		{
			p[k] = p[i];
			k--;
		}
	}
	return newlength;
}

int main()
{
	char *str;
	str = (char *)malloc(MAX*sizeof(char));
	strcpy(str, "Mr John Smith");
	int n = strlen(str);
	printf("replace the space before:\n %s",str);
	n = ReplaceSpace(str, n);
	printf("after replace the sapce: %s,the length is %d",str,n);
	return 0;


}