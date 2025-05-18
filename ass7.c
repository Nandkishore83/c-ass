#include<stdio.h>
int main()
{
	char text[10000];
	while(fgets(text,10000,stdin)!=NULL)
	{
	printf("%s",text);
	}
}
