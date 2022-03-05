#include <stdio.h>

int main()
{
	int t,y,m,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&y,&m);
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		printf("31\n");
		else if(m==4||m==6||m==9||m==11)
		printf("30\n");
		else if((y%4==0&&y%100!=0)||y%400==0)
		printf("29\n");
		else
		printf("28\n");
	}
 	return 0;
}

