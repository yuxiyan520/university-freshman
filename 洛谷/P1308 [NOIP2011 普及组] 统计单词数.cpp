#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int len1, len2, i, j, sum = 0, flag = -1;
	char ci[12], ju[1000002];
	scanf("%s", &ci);
	getchar();
	gets(ju);
	len2 = strlen(ju);
	for (i = 0; i < len2; i++)
	{
		if (ju[i] >= 65 && ju[i] <= 90)
			ju[i] += 32;
	}
	len1 = strlen(ci);
	for (i = 0; i < len1; i++)
	{
		if (ci[i] >= 65 && ci[i] <= 90)
			ci[i] += 32;
	}
	for (i = 0; i < len2-len1+1; i++)
	{
		if(i==0||ju[i-1]==' ')
		{
			for (j = 0; j < len1; j++)
			{
				if (ju[i + j] != ci[j])
				{
					break;
				}
			}
			if (j == len1&&ju[i + j] == ' ')
			{
				sum++;
				if (flag == -1)
					flag = i;
			}
		} 
	}
	if (sum == 0)
	{
		printf("-1");
	}
	else
	{
		printf("%d %d", sum, flag);
	}
}

