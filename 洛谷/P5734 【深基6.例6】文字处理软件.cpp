#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	int q;
	char a[105]={0};
	scanf("%d",&q);
	scanf("%s",&a);
	while(q--)
	{
		int i;
		scanf("%d",&i);
		if(i==1)
		{
			char b[105]={0};
			scanf("%s",&b);
			strcat(a,b);
			printf("%s\n",a);
		}
		if(i==2)
		{
			int n,m,i;
			scanf("%d%d",&n,&m);
			for(i=n;i<n+m;i++)
			{
				a[i-n]=a[i];
			}
			a[i-n]='\0';
			printf("%s\n",a);
		}
		if(i==3)
		{
			int n;
			char b[105]={0};
			scanf("%d%s",&n,&b);
			char c[105]={0};
			for(int i=n;a[i]!='\0';i++)
			{
				c[i-n]=a[i];
			}
			char *pa=a;
			*(pa+n)='\0';
			strcat(a,b);
			strcat(a,c);
			printf("%s\n",a);
		}
		if(i==4)
		{
			char *pa=a;
			char b[105]={0};
			scanf("%s",&b);	
			char *p=strstr(a,b);
			if(p==NULL)
			printf("-1\n");
			else
			printf("%d\n",p-pa);
		}
	}
 	return 0;
}

