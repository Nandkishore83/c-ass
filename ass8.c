#include<stdio.h>
int main()
{
	char read[1000];
	int count=0,i,j=0;
	while(fgets(read,sizeof(read),stdin)!=NULL)
	{
		j++;
		count=0;
	
		for(i=0;read[i]!='\0';i++)
		{
			if('A'<= read[i] && 'Z'>= read[i]||'a'<= read[i] && 'z'>= read[i]||'0'<= read[i] && '9'>= read[i])
			{
				count++;
			}
		}
		if (count>0)
		{
			printf("Length of line %d = %d\n",j,count);
		}
	}
}
