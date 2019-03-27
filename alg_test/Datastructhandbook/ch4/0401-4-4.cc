/**
delete aim bytes in a string 
example:
	1.
	input: "abcdeas"   delete:"ade"
	output: "bsc"

**/

bool instr(char *t, char c)
{
	for(int i =0; t[i]; ++i)
		if(t[i] == c)
			return true;
	return false;	
}

void swap(char &x, char &y)
{
	char temp=x;
	x=y;
	y=temp;
}

void Delchars1(char *s, char *t)
{
	int k= 0,i;
	for(i = 0; s[i]; ++i)
		if(!instr(t, s[i]))
		{
			s[k] = s[i];
			k++;	
		}
	s[k] = '\0';	
}

void Delchars2(char *s, char *t)
{
	int k = 0,i = 0,, n = 0;
	while(s[i])
	{
		n++;
		if(instr(t, s[i]))
			k++;
		else
			s[i-k] = s[i];
		i++;
	}
	s[n-k] = '\0';
}

void Delchars3(char *s, char *t)
{
	int i = -1,j=0;
	while(s[j])
	{
		if(!(instr(t, s[j])))
		{
			i++;
			if(i!=j)
				swap(s[i], t[j]);
		}
		j++;
	}
	s[i+1] = '\0';
}