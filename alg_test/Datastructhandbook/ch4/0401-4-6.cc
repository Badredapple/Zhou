/**
 zip the string  
 example:
	input: eeeeeeaaaaffff
	output: e6a4f3
**/

#include <stdio.h>
#include <string.h>
#include <malloc.h>
#define MAX 100

void Compress1(char *str)
{
	int i=0,k;
	char t;
	while(str[i] != '\0')
	{
		t = str[i];
		i++;
		if(str[i] != t) continue;
		k = 1;
		while(str[i] != '\0' && str[i] == t)
		{
			k++;
			str[i] = '#';
			i++;
		}
		str[i-k+1] = '0'+k;
	}
	i = 0; k = 0;
	for(i = 0; str[i] != '\0';i++) // after gdb ,this have a bug
	{
		if(str[k] != '#')
		{
			str[k] = str[i];		
			k++;
		}
	}
	str[k] = '\0';
}

void display(char *str)
{
	printf("%s =>",str);
	Compress1(str);
	printf("%s\n", str);
}

int main()
{
	char *p;
	p = (char *)malloc(MAX*sizeof(char));
	printf("Test string is\n");
//	strcpy(p,"aabbbc");
//	display(p);
	strcpy(p,"eeeaaaffff");
	display(p);
	free(p);
}