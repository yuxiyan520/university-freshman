#include <stdio.h>

int main()
{
	int n,i,j=0,score[105]={0},max=0,min=100,maxshu,minshu,shu=0,fen=0,zhong;
	float ave;
	while(1)
	{
		scanf("%d",&n);
		if(n>=0&&n<=100)
		{
			shu++;
			fen+=n;
			score[n]++;
			if(n>=max)
			{
				max=n;
				maxshu=shu;
			}
			if(n<=min)
			{
				min=n;
				minshu=shu;
			}
		}
		else if(n==-1)
		break;
		else if(n<-1||n>100)
		continue;
	}
	ave=1.0*fen/shu;
	for(i=0;i<=100;i++)
	{
		if(score[i]>=j)
		{
			j=score[i];
			zhong=i;
		}
	}
	printf("count: %d\n",shu);
	printf("ave: %.4f\n",ave);
	printf("max: %d: %d\n",maxshu,max);
	printf("min: %d: %d\n",minshu,min);
	printf("mode: %d\n",zhong);
 	return 0;
}

