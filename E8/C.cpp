#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int i,len,len_max=0,len_min=1001;
	char a[1005][1001],*pmax=NULL,*pmin=NULL;
	i=1;
	while((gets(a[i]))!=NULL)
	{
		len=strlen(a[i]);
		if(len>len_max)
		{
			len_max=len;
			pmax=a[i]; 
		}
		if(len<len_min)
		{
			len_min=len;
			pmin=a[i];
		}
		i++;		
	}
	printf("%d\n%s\n%d\n%s\n",len_min,pmin,len_max,pmax);
 	return 0;
}
