#include <stdio.h>
#include <string.h>
int main()
{
	char n[1000],q[1000];
	int a,b,len,i,l;
	unsigned long long int m=0,k;
	scanf("%s%d%d",&n,&a,&b);
	len=strlen(n);
	for(i=len-1,l=0,k=1;i>=0;i--,l++,k*=a)
	{
		if(n[i]>='0' && n[i]<='9')//Êý×Ö 
			m+=(n[i]-'0')*k;
		if(n[i]>='A'&&n[i]<='Z')//×ÖÄ¸ 
			m+=(n[i]-'A'+10)*k;
	}
	for(i=0;m>0;i++)
	{
		if(m%b>=0&&m%b<=9)
			q[i]=m%b+'0';
		if(m%b>=10)
			q[i]=m%b+'A'-10;
		m/=b;
	}
	for(i=i-1;i>=0;i--)
		printf("%c",q[i]);
 	return 0;
}
