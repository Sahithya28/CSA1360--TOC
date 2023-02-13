#include<stdio.h>
#include<string.h>
main()
{
	char s[20],A = '0';
	int i,n, c=0;
	printf("enter the string:");
	scanf("%s",s);
	n = strlen(s);
	for (i=0;i<n;i++)
	{
		if(s[i]=='0' || s[i]=='1')
		{
			c=0;
		}
		else
		{
			c=1;
			printf("invalid\n");
			break;
		}
    } 
	if(c==1)
	{
		if(s[0]=='1' && s[n-1]=='0')
		{
			printf("the string was DFA");
		}
		else
		{
			printf("not DFA");
		}
		}	
}
