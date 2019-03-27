/**
find the max sub string 
example:
   input: roorle  
   output: roor is the max sub string , so outpu 4 

**/
#include <stdio.h>
#include <string.h>

int GetMaxSubstring(char *pstr)
{
	if(pstr == NULL || pstr[0] == '\0'|| pstr[1] =='\0')
		return -1;
	int n = strlen(pstr);
	int maxlen = 1;
	char *p = pstr + 1;
	while(*p)
	{
		char *pleft = p- 1;	
		char *pright = p+1;
		while(pleft >= pstr && pright <= &pstr[n-1] && *pleft == *pright)
		{
			pleft --;
			pright++;
		}
		int tlen = pright-pleft-1;
		if(tlen > maxlen)
			maxlen = tlen;
		pleft = p -1;
		pright = p;
		while(pleft >= pstr && pright <= &pstr[n-1] && *pleft == *pright)
		{
			pleft--;
			pright++;
		}
		tlen = pright-pleft-1;
		if(tlen > maxlen)
			maxlen = tlen;
		p++;
	}
	return maxlen;
}

int main()
{
	char s[] = "roaaorle";
	char t[] = "xaaadaaaaab";
	printf("the max substring = %d \n", GetMaxSubstring(s));
	printf("the max substring = %d \n", GetMaxSubstring(s));
}