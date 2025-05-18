#include<stdio.h>
int main()
{
	char read[100000];
	int i,count=0;
	while(fgets(read,sizeof(read),stdin)!=NULL)
	{
             for(i=0;read[i]!='\0';i++)
          {
                if ((read[i] >= 'A' && read[i] <= 'Z') || (read[i] >= 'a' && read[i] <= 'z') || (read[i] >= '0' && read[i] <= '9'))
		       count++;	
          }

	
	}
	printf("There are total %d number of character \n",count);
}

