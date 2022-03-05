#include <stdio.h>

int main()
{
  int i,q,a[6];
  double m;
  scanf("%d%lf",&i,&m);
  scanf("%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
  if(i==1)
  {
  	if(m<3.5)
  	printf("REJECTED");
  	if(m>=3.5)
  	{
  		for(q=0;q<=5;q++)
  		{
  			if(a[q]<80)
  			{
  				printf("REJECTED");
  				break;
			  }
		  }
		if(q==6)
		printf("APPROVED");
	  }
  }
  if(i==0)
  {
  	if(m<3.6)
  	  	printf("REJECTED");
  	if(m>=3.6)
  	{
  		for(q=0;q<=5;q++)
  		{
  			if(a[q]<85)
  			{
  				printf("REJECTED");
  				break;
			  }
		  }
		if(q==6)
		printf("APPROVED");
	  }
  }
 return 0;
}

