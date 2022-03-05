#include <stdio.h>
#include <string.h>
	char m[2000000];
	int m1[2000000],m2[2000000];
int main()
{
	int n,i,q,sz,k,l=1;
	scanf("%d",&n);
	scanf("%s",&m);
	sz=strlen(m);
	for(i=0;i<sz;i++)
	{
		if(m[i]>='0' && m[i]<='9')
			m1[i]=m[i]-'0';
		else
			m1[i]=m[i]-'A'+10;
		for(q=0;q<4;q++)
		{
			m2[4*i+3-q]=1-(m1[i]%2);
			m1[i]/=2;
		}
	}
	for(i=4*sz-1;;i--)
	{
		m2[i]++;
		if(m2[i]==2)
			m2[i]=0;
		else
			break;
	}
	for(i=0;i<4*sz;i++)
		printf("%d",m2[i]);
 	return 0;
}

