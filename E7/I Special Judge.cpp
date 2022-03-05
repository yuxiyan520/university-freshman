#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int i=0,j=0,prog_i,ans_i,flag; 
	char ans[101][101],prog[101][101],a[101];
	while((scanf("%s",&a))!=EOF)
	{
		if((strcmp(a,"ans.out"))==0)
		break;
		if(a!="ans.out"&&a!="\0")
		{
			strcpy(prog[i],a);
			i++;
		}
	}
	prog_i=i-1;//共有prog_i行数据 
	i=1;
	while((scanf("%s",&a))!=EOF)
	{
		if((strcmp(a,"--END--"))==0)
		break;
		if(a!="--END--"&&a!="\0")
		{
			strcpy(ans[i],a);
			i++;
		}
	} 
	ans_i=i-1;//共有ans_i行数据 
	if(prog_i>ans_i)
	{
		printf("0.0000\n");
	printf("[Wrong Answer]: Your output is too long.\n");
	} 		
	if(prog_i<ans_i)
	{
		for(i=1;i<=prog_i;i++)
		{
			if(strcmp(prog[i],ans[i])!=0)
			break;
		}
		if(i==prog_i+1)
		{
			printf("%.4lf\n",1.0*prog_i/ans_i);
			printf("[Wrong Answer]: Your output is too short.\n");
		}
		else
		{
			j=0;
			while(1)
			{
				if((strncmp(prog[i],ans[i],j))!=0)
					break;
				j++;
			}
			printf("%.4lf\n",1.0*(i-1)/ans_i);
			if(ans[i][j-1]=='\0')
			printf("[Wrong Answer]: On line %d column %d, read %c, expect %c.\n",i,j,prog[i][j-1],'?');
			else if(prog[i][j-1]=='\0')
			printf("[Wrong Answer]: On line %d column %d, read %c, expect %c.\n",i,j,'?',ans[i][j-1]);
			else			
			printf("[Wrong Answer]: On line %d column %d, read %c, expect %c.\n",i,j,prog[i][j-1],ans[i][j-1]);
		}
	}
	else
	{
		for(i=1;i<=prog_i;i++)
		{
			if(strcmp(prog[i],ans[i])!=0)
			break;
		}
		if(i==prog_i+1)
		{
			printf("1.0000\n");
			printf("[Accepted]\n");
		}
		else
		{
		j=1;
		while(1)
			{
				if((strncmp(prog[i],ans[i],j))!=0)
					break;
				j++;
			}
		printf("%.4lf\n",1.0*(i-1)/ans_i);
		if(ans[i][j-1]=='\0')
			printf("[Wrong Answer]: On line %d column %d, read %c, expect %c.\n",i,j,prog[i][j-1],'?');
		else if(prog[i][j-1]=='\0')
			printf("[Wrong Answer]: On line %d column %d, read %c, expect %c.\n",i,j,'?',ans[i][j-1]);
			else			
			printf("[Wrong Answer]: On line %d column %d, read %c, expect %c.\n",i,j,prog[i][j-1],ans[i][j-1]);
		}
	}
 	return 0;
}

