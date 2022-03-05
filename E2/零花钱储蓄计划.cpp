#include <stdio.h>

int main()
{
  int n,y[12],i,j,k,mum=0,rest=0,mou=1;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	for(j=0;j<12;j++)
  	scanf("%d",&y[j]);
  	for(k=0;k<12;k++)
  	{
  		rest=rest+300;
  		if((rest-100)>=y[k] && mou>0)
  		{
  			mum+=(rest-y[k])/100*100;
  			rest=(rest-y[k])%100;;
  			mou++;
  			continue;
		  }
		if((rest-100)<y[k] && rest>=y[k] && mou>0)
		{
			rest=rest-y[k];
			mou++;
			continue;
		}
		if(rest<y[k] && mou>0)
		mou=mou*(-1);
	  }
	  if(mou>0)
	  {
	  	rest=rest+1.2*mum;
	  	mum=0;
		  }	
  }
  if(mou<0)
  printf("%d",mou);
  if(mou>0)
  printf("%d",rest);
 return 0;
}

