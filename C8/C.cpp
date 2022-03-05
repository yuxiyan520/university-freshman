#include <stdio.h>
#include <math.h>
#include <string.h>
int isPrime(int primes[], int n)
{
	int i;
	for(i=0; primes[i]*primes[i] <= n; i++)
	{
		if (n % primes[i] == 0)
		return 0;
	}
	return 1;
}
void init_primes(int primes[], int Q) //�����Q��������Q>=5��
{
	int count=3, num, step;
	primes[0] = 2; primes[1] = 3; primes[2] = 5; //ͷ3������
	num = 7; step = 2; //��ʼΪ2
	while(count < Q)
	{
		step = 6 - step; // ���� 4-2-4-2-...���У����ٱ���
		if (isPrime(primes, num))
		primes[count++] = num;
		num += step; // ��һ�����ܵ�����
	}
}
int primes[10000000];
int main()
{
	int l,i,add=0,m;
	init_primes(primes,100000);
	scanf("%d",&l);
	for(i=2,m=0;;i++)
	{
		if(isPrime(primes,i)==1)
		{
			if(add+i>l)
			break;
			if(add+i<=l)
			{
				add+=i;
				m++;
			}
		}
	}
	printf("%d",m);
 	return 0;
}

