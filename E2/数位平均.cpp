#include <stdio.h>
#include <math.h>
int main()
{
  long long int n,m[10],i,sum=0,pj;
  scanf("%lld",&n);
  for(i=0;i<10;i++)
  	{
		m[i]=n%10;
		n=n/10;
		sum=sum+m[i];
	  }
	  //n=0,m��n�ĸ���λ����λ�����һλ��,sum��ǰʮλ������ 
  pj=sum/10;
  for(i=0;i<10;i++)
  {
  	if(m[i]>pj)
  	m[i]=0;//����������0 
  	n=n+m[i]*(pow(10,i));
  }
  printf("%lld",n);
 return 0;
}

