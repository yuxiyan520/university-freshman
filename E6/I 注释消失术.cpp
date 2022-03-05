#include <stdio.h>
#include <math.h>
#include <string.h>
char a[1005],b[2005];
int len,i,j,len0=0,flag=0;
int main()
{
	while((gets(a))!=NULL)
	{
		len=strlen(a);
		for(i=len0,j=0;i<len0+len;i++,j++)
		{
			b[i]=a[j];
		}
		len0+=len;
		b[len0]='\n';
		len0++;
		for(i=0;i<len;i++)
		a[i]=0;
	}
	for(i=0;i<len0;i++)
	{
		if(a[i]!='"'&&((a[i]!='/'&&a[i+1]!='/')||(a[i]=='/'&&a[i+1]!='/')||(a[i]!='/'&&a[i+1]=='/'))&&((a[i]!='/'||a[i+1]!='*')||(a[i]=='/'||a[i+1]!='*')||(a[i]!='/'||a[i+1]=='*')))
			printf("%c",b[i]);
		if(a[i]=='"')
			{
				printf("\"");
				if(flag==0)
				{
					for(i=i+1;i<len;i++)
					{
						printf("%c",a[i]);
						if(a[i]=='"');
						break;
					}
				}
				if(flag==1)
				flag=0;
			}
		if(a[i]=='/'&&a[i+1]=='/')
		{
			for(i=i+2;;i++)
			{
				if(a[i]=='\n')
				{
					printf("\n");
					break;
				 } 
			}
		}
		if(a[i]=='/'&&a[i+1]=='*')
		{
			for(i=i+2;;i++)
			{
				if(a[i]=='"')
				flag=1;
				if(a[i]=='*'&&a[i+1]=='/')
				{
					i++;
					break;
				}
				
			}
		}
	}
 	return 0;
}

/*for(i=0;i<len;i++)
		{
			if(a[i]!='"'&&(!((a[i]=='/')&&(a[i+1]=='/'||a[i+1]=='*') ) ) )
				printf("%c",a[i]);
			else if(a[i]=='"');
			{
				for(i=i+1;i<len;i++)
				{
					if(a[i]=='"');
					break;
				}
			}
			else if(a[i]=='/'&&a[i+1]=='/')
				break;
			
		}*/
