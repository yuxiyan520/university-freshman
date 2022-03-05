#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int i,j,l,q,len,m[55]={0};
	char fu[55],*hao[55]={0},p[8]="perfect",gai[55];
	while((gets(fu))!=NULL)
	{
		hao[0]=fu;
		hao[1]=strchr(hao[0],'g');
		if(hao[1]==NULL)
		printf("%s\n",fu);
		else
		{
			j=1;
			while(*(hao[1]+j)=='o')
			{
				j++;	
			}
			if(j-1>=2&&*(hao[1]+j)=='d')
			{
				m[1]=j+1;
				*hao[1]='\0';
			}
			else
			{
				j=0;
			}
			for(i=2;i>=2;i++)
			{
				hao[i]=strchr(hao[i-1]+j+1,'g');
				if(hao[i]==NULL)
				break;
				j=1;
				while(*(hao[i]+j)=='o')
				{
					j++;
				}
				if(j-1>=2&&*(hao[i]+j)=='d')
				{
					m[i]=j+1;
					*hao[i]='\0';
				}
				else
				{
					j=0;
				}
			}
			l=i;
			for(q=0,i=1;i<l+1;i++)
			{
				printf("%s",fu+q);
				len=strlen(fu+q);
				while(m[i]==0&&i<=54)
					i++;
				if(i==55)
					{
						printf("\n");
						break;
					}
				else
					{
						q+=len+m[i];
						printf("%s",p);
					}
				
			}
		}
		for(i=0;i<=54;i++)
		{
			fu[i]=0;
			hao[i]=NULL;
			m[i]=0;
		}
		
	}
 	return 0;
}

