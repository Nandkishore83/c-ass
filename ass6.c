#include<stdio.h>
int main()
{
	char read[1000];
	int i,count=0;
	int h[1000]={0};
	while(fgets(read,sizeof(read),stdin)!=NULL)
	{
		for(i=0;read[i]!='\0';i++)
		{
			if(('a'<=read[i])&&(read[i]<='z')||('A'<=read[i])&&(read[i]<='Z'))
			{
				++count;
			}
			else if(count>0)
			{
				h[count]++;
				count=0;
			}
			
		}
		if(count>0)
		{
			h[count]++;
			count=0;
		}
	}
	for(i=0;h[i]<1000;i++)
	{
		if(h[i]>0)
		{
                	printf("There are %d leteter word =  %d \n",i,h[i]);
        
		}
	}

}


