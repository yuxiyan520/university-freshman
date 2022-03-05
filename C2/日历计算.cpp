#include <stdio.h>

int main()
{
  int y,m,add,j,_y,d1,i,q,p,day;
  int mouth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  scanf("%d%d",&y,&m);
  printf(" Sun Mon Tue Wed Thu Fri Sat\n");
  _y=(y-1900)%28;
  for(j=1,add=0;j<=_y;j++)
  {
  	add++;
  	if(j%4==0)
	  add++; 
  }
  add=add%7;
  d1=1+add;//d1代表那一年的第一天的星期
  if((y%4==0 && y%100!=0)||y%400==0)
  {
  	mouth[1]++;
  	if(m==2)
  	{
  		d1=(d1+3)%7;
  		//输出闰年2月 
  		if(d1!=7)
  		{
  			printf(" ");
  			for(q=0;q<d1;q++)
  			printf("    ");
  			for(p=1;p<(7-d1);p++)
  			printf("%3d ",p);
  			printf("%3d\n ",p);
  			for(day=p+1;day<29;day++)
  			{
  			printf("%3d",day);
  			if((day-p)%7!=0)
  			printf(" ");
  			else
  			printf("\n ");
  			}
  			printf("%3d",day);
  			printf("\n");
		  }
		else
		{
			printf(" ");
		for(q=1;q<29;q++)
		{
			printf("%3d",q);
			if(q%7!=0)
			printf(" ");
			else
			printf("\n ");
		}
		printf("%3d",q);
		printf("\n");
		}
	  }
	if(m>=3)
	{
		for(i=0;i<m-1;i++)
			d1=d1+mouth[i];
	    d1=d1%7;
	}
  }
  else
  {
  	for(i=0;i<m-1;i++)
  		d1=d1+mouth[i];
  	d1=d1%7;
  	if(m==2)
  	{
  		//输出平年2月 
  		if(d1!=7)
  		{
  			printf(" ");
  			for(q=0;q<d1;q++)
  			printf("    ");
  			for(p=1;p<(7-d1);p++)
  			printf("%3d ",p);
  			printf("%3d\n ",p);
  			for(day=p+1;day<28;day++)
  			{
  			printf("%3d",day);
  			if((day-p)%7!=0)
  			printf(" ");
  			else
  			printf("\n ");
  			}
  			printf("%3d",day);
  			printf("\n");
		  }
		else
		{
			printf(" ");
		for(q=1;q<28;q++)
		{
			printf("%3d",q);
			if(q%7!=0)
			printf(" ");
			else
			printf("\n ");
		}
		printf("%3d",q);
		printf("\n");
		}
	  }
  }
  if((m<=7 && m%2!=0)||(m>=8 && m%2==0))
  {
  	//输出31天的月份 
  	if(d1!=7)
  		{
  			printf(" ");
  			for(q=0;q<d1;q++)
  			printf("    ");
  			for(p=1;p<(7-d1);p++)
  			printf("%3d ",p);
  			printf("%3d\n ",p);
  			for(day=p+1;day<31;day++)
  			{
  			printf("%3d",day);
  			if((day-p)%7!=0)
  			printf(" ");
  			else
  			printf("\n ");
  			}
  			printf("%3d",day);
  			printf("\n");
		  }
		else
		{
			printf(" ");
		for(q=1;q<31;q++)
		{
			printf("%3d",q);
			if(q%7!=0)
			printf(" ");
			else
			printf("\n ");
		}
		printf("%3d",q);
		printf("\n");
		}
  }
  if(m==4||m==6||m==9|m==11)
  {
  	//输出30天的月份 
  	if(d1!=7)
  		{
  			printf(" ");
  			for(q=0;q<d1;q++)
  			printf("    ");
  			for(p=1;p<(7-d1);p++)
  			printf("%3d ",p);
  			printf("%3d\n ",p);
  			for(day=p+1;day<30;day++)
  			{
  			printf("%3d",day);
  			if((day-p)%7!=0)
  			printf(" ");
  			else
  			printf("\n ");
  			}
  			printf("%3d",day);
  			printf("\n");
		  }
		else
		{
			printf(" ");
		for(q=1;q<30;q++)
		{
			printf("%3d",q);
			if(q%7!=0)
			printf(" ");
			else
			printf("\n ");
		}
		printf("%3d",q);
		printf("\n");
		}
  }
 return 0;
}

