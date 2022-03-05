#include <stdio.h>

int main()
{
	int n,i,m,w[10],n0,mou,day,year,year0,mou0,day0,k,cha;
	int mouth[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	while(scanf("%d",&n)!=EOF)
	{
		cha=0;
		n0=n;
		year0=n/10000;
		mou0=(n%10000)/100;
		day0=n%100;
		for(i=7;i>=0;i--)
		{
			w[i]=n0%10;
			n0/=10;	
		}
		while(1)
		{
			w[3]++;
			for(i=3;i>=1;i--)
			{
				if(w[i]==10)
				{
					w[i-1]++;
					w[i]=0;
				}
			}//年逐渐加1 
			year=w[0]*1000+w[1]*100+w[2]*10+w[3];
			mou=w[3]*10+w[2];
			day=w[1]*10+w[0];
			if((mou>=1 && mou<=7 && mou%2==1)||(mou>=8 && mou<=12 && mou%2==0))
			{
				if(day<=31 && day>=1)
				break;
			}
			if(mou==4||mou==6||mou==9||mou==11)
			{
				if(day>=1 && day<=30)
				break;
			}
			if(mou==2)
			{
				if((year%4==0 && year%100!=0)||year%400==0)
				{
					 if(day>=1 && day<=29)
					 break;
				}
				else
				{
					if(day>=1 && day<=28)
					break;
					
				}
			}
			if(w[0]==9 && w[1]==9 && w[2]==9 && w[3]==9)
			break;
		}
		if(w[0]==9 && w[1]==9 && w[2]==9 && w[3]==9)
		printf("-1");
		else
		{
		//计算两个日期的时间差
		if(mou>mou0)
		{
			if(mou0==1||mou0==2)
			{
				for(k=year0;k<year;k++)
				{
				if((k%4==0 && k%100!=0)||k%400==0)
				cha+=366;
				else
				cha+=365;
				}
				cha+=(mouth[mou0]-day);
				for(k=mou0+1;k<mou;k++)
				{
					if(k==2)
					{
						if((year%4==0 && year%100!=0)||year%400==0)
						cha+=29;
						else
						cha+=28;
					}
					else
					cha+=mouth[k];
				}
				cha+=day;
			}
			else
			{
				for(k=year0+1;k<=year;k++)
				{
					if((k%4==0 && k%100!=0)||k%400==0)
				cha+=366;
				else
				cha+=365;
				}
				cha+=(mouth[mou0]-day);
				for(k=mou0+1;k<mou;k++)
				{
					cha+=mouth[k];
				}
				cha+=day;				
			}
				
		}
		else if(mou0==mou && day>=day0)
		{
			if(mou0==1||mou0==2)
			{
				for(k=year0;k<year;k++)
				{
				if((k%4==0 && k%100!=0)||k%400==0)
				cha+=366;
				else
				cha+=365;
				}
				cha+=(day-day0);
			}
			else
			{
				for(k=year0+1;k<=year;k++)
				{
					if((k%4==0 && k%100!=0)||k%400==0)
				cha+=366;
				else
				cha+=365;
				}
				cha+=(day-day0);								
			}
		}
		else if(mou==mou0 && day0>day)
		{
			if(mou0==1||mou0==2)
			{
				for(k=year0;k<year;k++)
				{
				if((k%4==0 && k%100!=0)||k%400==0)
				cha+=366;
				else
				cha+=365;
				}
				cha-=(day0-day);
			}
			else
			{
				for(k=year0+1;k<=year;k++)
				{
					if((k%4==0 && k%100!=0)||k%400==0)
				cha+=366;
				else
				cha+=365;
				}
				cha-=(day0-day);								
			}
		}
		else
		{
			if(mou0==1||mou0==2)
			{
				for(k=year0;k<year;k++)
				{
				if((k%4==0 && k%100!=0)||k%400==0)
				cha+=366;
				else
				cha+=365;
				}
				cha-=day0;
				for(k=mou+1;k<mou0;k++)
				{
					if(k==2)
					{
						if((year%4==0 && year%100!=0)||year%400==0)
						cha-=29;
						else
						cha-=28;
					}
					else
					cha-=mouth[k];
				}
				cha-=(mouth[mou]-day0);
			}
			else
			{
				for(k=year0+1;k<=year;k++)
				{
					if((k%4==0 && k%100!=0)||k%400==0)
				cha+=366;
				else
				cha+=365;
				}
				cha-=day0;
				for(k=mou+1;k<mou0;k++)
				{
					if(k==2)
					{
						if((year%4==0 && year%100!=0)||year%400==0)
						cha-=29;
						else
						cha-=28;
					}
					else
					cha-=mouth[k];
				}
				cha-=(mouth[mou0]-day0);											
			}	
		}
		printf("%d",cha);
		}
	}
 	return 0;
}

