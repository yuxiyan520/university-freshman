#include <stdio.h>
#include <math.h>
#include <string.h>

int Iszhi(int a)//质数返回1，非质数返回0 
{
	int flag=1,i;
	if(a==1)
	return 0;
	else if(a==2)
	return 1;
	else
	{
		for(i=2;i<=sqrt(a);i++)
		{
			if(a%i==0)
			{
				flag=0;
				break;
			 } 
		}
		return flag;
	}
}

int Pan0(int x)
{
	int i;
	for(i=0;x!=0;i++)
	{
		x/=10;
	}
	return i;
}
void Pan(int shu,int a,int b)//1表示是回文质数 
{
	if(shu>=a&&shu<=b&&(Iszhi(shu)==1))
	printf("%d\n",shu);
}
void Huiwen(int a,int b,int aw,int bw)
{
	int d1,d2,d3,d4,d5,d6,d7,d8,d9,shu;
	if(aw==1)
	goto q1;
	if(aw==2)
	goto q2;
	if(aw==3)
	goto q3;
	if(aw==4)
	goto q4;
	if(aw==5)
	goto q5;
	if(aw==6)
	goto q6;
	if(aw==7)
	goto q7;
	if(aw==8)
	goto q8;
	if(aw==9)
	goto q9;
	q1:
		for(d1=1;d1<=9;d1+=2)
		{
			shu=d1;
			if(shu>b)
			{
				goto end;
			}
			Pan(shu,a,b);
		}
		q2:
		for(d1=1;d1<=9;d1+=2)
		{
			shu=d1*10+d1;
			if(shu>b)
			{
				goto end;
			}
			Pan(shu,a,b);
		}
		q3:
		for(d1=1;d1<=9;d1+=2)
		{
			for(d2=0;d2<=9;d2++)
			{
				shu=d1*100+d2*10+d1;
				if(shu>b)
				{
					goto end;
				}
					Pan(shu,a,b);
			}
		}
		q4:
		for(d1=1;d1<=9;d1+=2)
		{
			for(d2=0;d2<=9;d2++)
			{
				shu=d1*1000+d2*100+d2*10+d1;
				if(shu>b)
				{
					goto end;
				}
					Pan(shu,a,b);
			}
		}
		q5:
		for(d1=1;d1<=9;d1+=2)
		{
			for(d2=0;d2<=9;d2++)
			{
				for(d3=0;d3<=9;d3++)
				{
					shu=d1*10000+d2*1000+d3*100+d2*10+d1;
					if(shu>b)
					{
						goto end;
					}
					Pan(shu,a,b);
				}
				
			}
		}
		q6:
		for(d1=1;d1<=9;d1+=2)
		{
			for(d2=0;d2<=9;d2++)
			{
				for(d3=0;d3<=9;d3++)
				{
					shu=d1*100000+d2*10000+d3*1000+d3*100+d2*10+d1;
					if(shu>b)
					{
						goto end;
					}
					Pan(shu,a,b);
				}
				
			}
		}
		q7:
		for(d1=1;d1<=9;d1+=2)
		{
			for(d2=0;d2<=9;d2++)
			{
				for(d3=0;d3<=9;d3++)
				{
					for(d4=0;d4<=9;d4++)
					{
						shu=d1*1000000+d2*100000+d3*10000+d4*1000+d3*100+d2*10+d1;
						if(shu>b)
						{
							goto end;
						}
						Pan(shu,a,b);
					}
				}
				
			}
		}
		q8:
		for(d1=1;d1<=9;d1+=2)
		{
			for(d2=0;d2<=9;d2++)
			{
				for(d3=0;d3<=9;d3++)
				{
					for(d4=0;d4<=9;d4++)
					{
						shu=d1*10000000+d2*1000000+d3*100000+d4*10000+d4*1000+d3*100+d2*10+d1;
						if(shu>b)
						{
							goto end;
						}
						Pan(shu,a,b);
					}
				}
				
			}
		}
		q9:
		for(d1=1;d1<=9;d1+=2)
		{
			for(d2=0;d2<=9;d2++)
			{
				for(d3=0;d3<=9;d3++)
				{
					for(d4=0;d4<=9;d4++)
					{
						for(d5=0;d5<=9;d5++)
						{
							shu=d1*100000000+d2*10000000+d3*1000000+d4*100000+d5*10000+d4*1000+d3*100+d2*10+d1;
							if(shu>b)
							{
								goto end;
							}
							Pan(shu,a,b);
						}
					}
				}
				
			}
		}
		end:
		return;
}
int main()
{
	int a,b,i,aw,bw;
	scanf("%d%d",&a,&b);
	//判断a为几位数,b为几位数 
	aw=Pan0(a); 
	bw=Pan0(b);
	//产生回文数，然后判断是否在a.b.之间
	Huiwen(a,b,aw,bw); 
 	return 0;
}

