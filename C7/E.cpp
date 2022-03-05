
#include<stdio.h>
int gcd(int x,int y)
{
	int i;
	if(x<y)
	{
		i=y;
		y=x;
		x=i;	
	}
	if(y==0)
	return x;
	
	return gcd(y,x%y);
}
int GCD(int num1,int num2,int &c,int &t,int &s)
{
int C,T,S;
if(num2 == 0) 
{
c = num1;
t = 1;
s = 0;
return 0;
} 
GCD(num2,num1%num2,C,T,S);
c = C;
t = S;
s = T-((num1/num2)*S);
return 0;
}
int main(){
int num1,num2,c,t,s;
scanf("%d%d",&num1,&num2);
GCD(num1,num2,c,t,s);
printf("%d = %d*(%d) + %d*(%d)",gcd(num1,num2),num1,t,num2,s);
return 0;


}


//#include <stdio.h>
//#include <math.h>
//#include <string.h>
//int gcd(int,int);
//int a,b,c;
//int main()
//{
//	int a,b,c,i;
//	scanf("%d%d",&a,&b);
//	c=gcd(a,b);
//	if(a>b)
//	{
//		for(i=0;;i++)
//		{
//			if((c+b*i)%a==0)
//			{
//				break;
//			}
//		}
//		printf("%d = %d*(%d) + %d*(%d)",c,a,(c+b*i)/a,b,(-1)*i);
//	}
//	if(b>a)
//	{
//		for(i=0;;i--)
//		{
//			if((c-a*i)%b==0)
//			{
//				break;
//			}
//		}
//		printf("%d = %d*(%d) + %d*(%d)",c,a,i,b,(c-a*i)/b);
//	}
// 	return 0;
//}
//

