#include<stdio.h>
int main()
{
	char read[10000];
	int i, count=0,lcount=0;
	while(fgets(read,sizeof(read),stdin)!=NULL)
	{
		++lcount;
		for(i=0; read[i]!='\0';i++)
		{
			if (read[i]!=' ')
			{
				printf("%c",read[i]);
			}
			else if (read[i]==' '&& ((read[i+1]!=' ')||(read[i]!='\0')))
			{
				printf("\n");
				++count;
			}
		}
	}
	
		printf("there  are %d number of words\n",count+lcount);
}

			

