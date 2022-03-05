#include<stdio.h>
int main(){
	int i; 
	char result[5];
	for(i=1;;++i)
	{
		int r = scanf("%s",result);
		if(r == EOF)
		{
			break;
		}
		if(result[0]=='l')
		{
			if(result[1]=='l')
				printf("yes\n");
			else if(result[1]=='w')
				printf("no\n");
			}
		else if(result[0]=='w')
			printf("no\n");
	}
	return 0;
}
