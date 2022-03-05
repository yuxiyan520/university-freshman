#include <stdio.h>
#include <math.h>

int main()
{
  long long int a,b,c;
  float i;
  while(scanf("%ld%ld%ld",&a,&b,&c)!=EOF)
  {
  	if((b*b)-(4*a*c)<0)
  	printf("NO Solution\n");
  	if((b*b)-(4*a*c)==0)
  	{
  		i=-(b/(2*c));
  		if(i==0)
  		printf("NO Solution\n");
  		else
  		printf("%.2f\n",i);
	  }
	  if((b*b)-(4*a*c)>0)
	  {
	  	float i1,i2;
	  	i1=(-b+sqrt((b*b)-(4*a*c)))/(2*c);
	  	i2=(-b-sqrt((b*b)-(4*a*c)))/(2*c);
	  	if(i1==0)
	  	printf("%.2f\n",i2);
	  	if(i2==0)
	  	printf("%.2f\n",i1);
	  	if(i1!=0 && i2!=0)
	  	{
	  	if(c>0)
	  	printf("%.2f %.2f\n",i2,i1);
	  	else
	  	printf("%.2f %.2f\n",i1,i2);
	    }
	  }
  }
 return 0;
}

